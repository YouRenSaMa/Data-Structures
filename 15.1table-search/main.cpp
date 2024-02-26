#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef int ElemType;
typedef struct {
    ElemType *elem;
    int table_elem;
}STable;
void InitStable(STable &S,ElemType len){
    S.elem= (ElemType*)malloc(sizeof(ElemType)*S.table_elem);
    S.table_elem=len+1;
    srand(time(NULL));
    for (int i=1;i<S.table_elem;i++){
        S.elem[i]=rand()%100;
    }
}
void Printf(STable S){
    for (int i = 1; i < S.table_elem; i++) {
        printf("%3d",S.elem[i]);
    }
}
int Search(STable S,ElemType x){
    S.elem[0]=x;
    int i;
    for (i=S.table_elem-1;S.elem[i]!=x;i--);
        return i;
}
int main(){
    STable S;
    InitStable(S,10);
    Printf(S);
    ElemType x;
    int ret;
    ret=Search(S,x);
    scanf("%d",&x);
    if(ret){
        printf("find it %d\n",ret);
    }else{
        printf("not find\n");
    }
    return 0;
}