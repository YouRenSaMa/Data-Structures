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
    S.table_elem=len;
    srand(time(NULL));
    for (int i=0;i<S.table_elem;i++){
        S.elem[i]=rand()%100;
    }
}
void Printf(STable S){
    for (int i = 0; i < S.table_elem; i++) {
        printf("%3d",S.elem[i]);
    }
    printf("\n");
}
int Search(STable S,ElemType q){
    int low=0,high=S.table_elem;
    int mid;
    while(high>=low){
        mid=(low+high)/2;
        if(q<S.elem[mid]){
            high=mid-1;
        }else if(q>S.elem[mid]){
            low=mid+1;
        }else {
            return mid;
        }
    }
    return -1;
}
//函数名中存储的是函数的入口地址，也是一个指针，是函数指针类型
//left指针和right指针是指向数组中的任意两个元素
//qsort规定如果left指针指向的值大于right指针指向的值，返回正值，小于，返回负值，相等返回0
int compare(const void *left,const void *right){
    return *(int*)left-*(int*)right;
}
//二分查找
int main(){
    STable S;
    InitStable(S,10);
    Printf(S);
    qsort(S.elem,S.table_elem,sizeof(ElemType),compare);//排序接口;
    Printf(S);
    ElemType x;
    printf("please input\n");
    scanf("%d",&x);
    int pos= Search(S,x);
    if(pos!=-1){
        printf("find mid=%d\n",pos);
    }else{
        printf("not find\n");
    }
    return 0;
}
