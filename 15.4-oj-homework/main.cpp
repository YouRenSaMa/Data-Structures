#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int TreeType;
typedef struct TreeNode {
    TreeType weight;
    struct TreeNode* lchild, * rchild;
}TreeNode, * Tree;

int InsertTree(Tree& T, TreeType& x) {
    Tree tree = (Tree)calloc(1, sizeof(TreeNode));
    tree->weight = x;
    if (T == NULL) {
        T = tree;
        return 0;
    }
    Tree parent=NULL, p;
    p = T;
    while (p != NULL) {
        parent = p;
        if (x > p->weight) {
            p = p->rchild;
        }
        else if (x < p->weight) {
            p = p->lchild;
        }
        else {
            return -1;
        }
    }
    if (parent!=NULL&&parent->weight > x) {
        parent->lchild = tree;
    }
    else if (parent != NULL && parent->weight < x) {
        parent->rchild = tree;
    }
    else {
        return -1;
    }
    return 1;
}

void Create(Tree& T, TreeType* length, int len) {
    for (int i = 0; i < len; i++) {
        InsertTree(T, length[i]);
    }
}

void InOrder(Tree T, TreeType* str, TreeType& i) {
    if (T != NULL) {
        InOrder(T->lchild, str, i);
        printf("%3d", T->weight);
        str[i++] = T->weight;
        InOrder(T->rchild, str, i);
    }
}

int SearchTree(Tree T, TreeType* str, TreeType c) {
    int low, high;
    low = 0, high = 9;
    int mid;
    while (high >= low) {
        mid = (high + low) / 2;
        if (str[mid] > c) {
            high = mid - 1;
        }
        else if (str[mid] < c) {
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    Tree T = NULL;
    TreeType length[10], str[10];
    int i = 0, x, q = 0, c=21;
    //87 7 60 80 59 34 86 99 21 3
    while (i < 10) {
        scanf("%d", &x);
        length[i] = x;
        i++;
    }
    Create(T, length, 10);
    //scanf("%d", &c);
    InOrder(T, str, q);
    int ret;
    ret = SearchTree(T, str, c);
        if (ret) {
            printf("\n");
            printf("%d\n", ret);
        }
        else {
            printf("not find\n");
        }
        return 0;
    }