#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LNode {
    ElemType data;//数据域
    struct LNode *Next;//指针域
}LNode,*LinkList;//LNode*是结构体指针，和LinkList完全等价
bool list_head_insert(LNode* &L){
    L=(LinkList) malloc(sizeof(LNode));//申请头结点空间,头指针指向头结点
    L->Next=NULL;
    ElemType s;
    scanf("%d",&s);
    LNode *x;//用来指向申请的新结点
    while(s!=9999){
        x=(LinkList) malloc(sizeof(LNode));
        x->data=s;
        x->Next=L->Next;//x的next指向原本链表的第一结点
        L->Next=x;//头结点的next指向新节点
        scanf("%d",&s);
    }
    return true;
}
bool List_tail_insert(LinkList &L){
    L=(LinkList) malloc(sizeof(LNode));
    L->Next=NULL;
    ElemType a;
    scanf("%d",&a);
    LNode *q,*t=L;
    while(a!=9999){
        q=(LinkList) malloc(sizeof(LNode));
        q->data=a;
        t->Next=q;
        t=q;
        scanf("%d",&a);
    }
    t->Next=NULL;
    return true;
}
void printf_list(LNode* L) {
    L=L->Next;
    while(L!=NULL){
        printf("%3d",L->data);
        L=L->Next;
    }
}
int main(){
    LinkList L;//创建一个L的链表
    list_head_insert(L);
    printf_list(L);
    printf("\n");
    List_tail_insert(L);
    printf_list(L);
    return 0;
}
