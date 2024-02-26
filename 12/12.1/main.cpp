#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
    int length;
}LNode,*LinkList;

bool TailList(LinkList &L){
    L=(LinkList) malloc(sizeof (LNode));
    L->next=NULL;
    ElemType x;
    scanf("%d",&x);
    LNode *p,*q;
    while(x!=0){
        p=(LinkList) malloc(sizeof (LNode));
        p->data=x;
        p->next=L->next;
        L->next=p;
        q=p;
        L->length++;
        scanf("%d",&x);
    }
    return true;
}
void Print(LinkList L){
    L=L->next;
    while(L!=NULL){
        printf("%3d",L->data);
        L=L->next;
        printf("\n");
    }
}
bool DelList(LinkList L,ElemType i){
    if(i<1||i>L->length){
        return false;
    }
    for (int j=0;j<i;j++){
        L=L->next;
    }
    LinkList q=L->next;
    L->next=q->next;
    return true;
}
int main(){
    LinkList L;
    ElemType i;
    TailList(L);
    Print(L);
    scanf("%d",&i);
    DelList(L,i);
    Print(L);
}