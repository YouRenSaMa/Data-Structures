#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode* next;
    ElemType length;
}LNode,*LinkList;
void head_tail_insert(LinkList &L){
    L=(LinkList )malloc(sizeof (LNode));
    L->next=NULL;
    ElemType x;
    LNode* s,*t;
    t=L;
    scanf("%d",&x);
    while(x!=9999){
        s=(LinkList) malloc(sizeof (LNode));
        s->data=x;
        s->next=t->next;
        t->next=s;
        t=s;
        L->length++;
        scanf("%d",&x);
    }
    s->next=NULL;
}
bool Find(LNode *L,int i){
    if(i<1||i>L->length){
        return false;
    }
    for(int j=0;j<i;j++){
        L=L->next;
    }
    printf("%d\n",L->data);
    return true;
}
bool Insert(LNode *&L,int i,ElemType e){
    LNode *q,*p;
    p=L;
    q=(LinkList) malloc(sizeof (LNode));
    if(i<1){
        return false;
    }
    for (int j=0;j<i-1;j++){
        p=p->next;
    }
    q->data=e;
    q->next=p->next;
    p->next=q;
    p->length++;
    return true;
}
bool DeleteList(LNode *&L,int i){
    LNode *p,*l;
    l=L;
    for (int j=0;j<i-1;j++){
        l=l->next;
    }
    p=l->next;
    l->next=p->next;
    l->length--;
    return true;
}
void PrintList(LinkList L)

{

    L = L->next;

    while (L != NULL)

    {

        printf("%3d", L->data);//打印当前结点数据

        L = L->next;//指向下一个结点

    }

    printf("\n");

}
int main(){
    LinkList L;
    head_tail_insert(L);
    Find(L,2);
    Insert(L,2,99);
    PrintList(L);
    DeleteList(L,4);
    PrintList(L);
    return 0;
}