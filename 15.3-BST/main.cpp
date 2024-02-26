#include<stdio.h>
#include<stdlib.h>
typedef int TreeType;
typedef struct BiTree{
    TreeType key;
    struct BiTree *lchild,*rchild;
}BiTree,*Tree;

int InsertTree(Tree &T,TreeType &k){//插入树结点
    Tree tree=(Tree) calloc(1,sizeof(BiTree));//给树根结点申请空间
    tree->key=k;
    if(T==NULL){//判断树根是否为空
        T=tree;
        return 0;
    }
    Tree p,parent;//p用来查找树
    p=T;
    while(p){
        parent=p;//parent用来存p的父亲
        if(k>p->key){//如果k大于结点的值，则p指到p的右孩子
            p=p->rchild;
        }else if(k<p->key){//如果k小于结点的值，则p指到p的左孩子
            p=p->lchild;
        }else{
            return -1;
        }
    }
        if(parent->key>k){//如果parent的值大于k，则把该tree结点赋值给parent的左孩子
            parent->lchild=tree;
        }else if(parent->key<k){//如果parent的值小于k，则把该tree结点赋值给parent的右孩子
            parent->rchild=tree;
        }else{
            return -1;
        }
}

void InOrder(Tree T){//遍历二叉排序树
    if(T!=NULL){
        InOrder(T->lchild);
        printf("%3d",T->key);
        InOrder(T->rchild);
    }
}

void CreatTree(Tree &T,TreeType *str,int len){//建树，遍历数组长度且每次插入数组元素
    int i;
    for(i=0;i<len;i++){
        InsertTree(T,str[i]);
    }
}

Tree Search(Tree T,TreeType k,Tree &parent){//查找二叉排序树的元素值
    parent=NULL;
    while(T!=NULL&&k!=T->key){
        parent=T;
        if(k>T->key){
            T=T->rchild;
        }else{
            T=T->lchild;
        }
    }
    return T;
}
void Delete(Tree &root,TreeType x){//删除二叉排序树的元素
    if(root==NULL){//如果树为空，则返回
        return;
    }
    if(x<root->key){//如果删除的值小于该结点的值，往该结点的左孩子做嵌套
        Delete(root->lchild,x);
    }else if(x>root->key){//如果删除的值大于该结点的值，往该结点的右孩子做嵌套
        Delete(root->rchild,x);
    }else {//如果删除的值等于该结点的值
        if(root->lchild==NULL){//如果该结点的左孩子为空，将该结点赋值给新申明的指针re，并将该结点的右孩子赋值该结点，并且释放re空间
            Tree Re=root;
            root=root->rchild;
            free(Re);
        }else if(root->rchild==NULL){//如果该结点的右孩子为空，将该结点赋值给新申明的指针re，并将该结点的左孩子赋值该结点，并且释放re空间
            Tree Re=root;
            root=root->lchild;
            free(Re);
        }else{//如果该结点的左右孩子都不为空，声明一个新结点tem来存储该结点的左孩子
            Tree tem=root->lchild;
            while(tem->rchild!=NULL){//做一个结点tem的右孩子不为空的循环，使结点tem一直指向自己的右孩子
                tem=tem->rchild;
            }
            root->key=tem->key;//将tem结点的值赋值给要删除的结点
            Delete(root->lchild,tem->key);//嵌套删除的结点
        }
    }
}
//二叉排序树的建立，中序遍历，查找，删除
int main(){
    Tree T=NULL;
    TreeType str[9]={5,3,7,9,1,2,8,4,6};
    CreatTree(T,str,9);
    InOrder(T);
    printf("\n");
    Tree parent,search;
    search= Search(T,6,parent);
    if(search){
        printf("find it=%d\n", search->key);
    }else{
        printf("not find\n");
    }
    Delete(T,3);
    InOrder(T);
    return 0;
}