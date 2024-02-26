#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
typedef int ElemType;
typedef struct QS{
    ElemType *adr;
    int length;
}QS;
void InitQuickSort(QS &S,ElemType len){
    S.length=len;
    S.adr=(ElemType*) malloc(sizeof(ElemType)*S.length);
    int i;
    srand(time(NULL));
    for(i=0;i<S.length;i++){
        S.adr[i]=rand()%100;
    }
}

void Printf(QS S){
    for (int i=0;i<S.length;i++){
        printf("%3d",S.adr[i]);
    }
}

int Partition(QS &S,int low,int high){
    ElemType qur=S.adr[low];
    while(low<high){
        while(low<high&&S.adr[high]>=qur){
            high--;
        }
        S.adr[low]=S.adr[high];
        while(low<high&&S.adr[low]<=qur){
            low++;
        }
        S.adr[high]=S.adr[low];
    }
    S.adr[low]=qur;
    return low;
}
void QuickSort(QS &S,int low,int high){
    if(low<high){
        int ret=Partition(S,low,high);
        QuickSort(S,low,ret-1);
        QuickSort(S,ret+1,high);
    }
}
int main(){
   QS S;
   InitQuickSort(S,10);
    Printf(S);
    printf("\n");
    QuickSort(S,0,9);
    Printf(S);
    return 0;
}