//创建一个链表并进行查询、增加、删除操作
#include<stdio.h>
#include<stdlib.h>
//先定义结构体类型
typedef  int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *Next;
    int length;
}LNode,*LinkList;
bool InsertList(LinkList &L){//插入数据
    L=(LNode *) malloc(sizeof (LinkList));
    L->Next=NULL;
    ElemType s;
    LNode *q;
    scanf("%d",&s);
    while(s!=0){
        q=(LinkList) malloc(sizeof(LNode));
        q->data=s;
        q->Next=L->Next;
        L->Next=q;
        L->length++;
        scanf("%d",&s);
    }
    return true;
}
void DelList(LinkList &L){

    ElemType x;
    scanf("%d",&x);
    for (int i=L->length;i>=x;i--){

    }
}

void PrintfList(LNode *L){
    L=L->Next;
    while(L!=NULL){
        printf("%2d",L->data);
        L=L->Next;
    }
    printf("\n");
}

int main(){
    LinkList L;//初始化一个L表
    InsertList(L);
    PrintfList(L);
    DelList(L);
    return 0;
}