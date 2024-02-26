#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string>
typedef int ElemType;
typedef struct Bubble{
    ElemType *add;
    int length;
}Bubble;

void InitBubble(Bubble &ST,int len){
    ST.length=len;
    ST.add=(ElemType *) malloc(sizeof(ElemType)*ST.length);
    int i;
    srand(time(NULL));
    for(i=0;i<ST.length;i++){
        ST.add[i]=rand()%100;
    }
}

void Printf(Bubble ST,ElemType n){
    for (int i=0;i<n;i++){
        printf("%3d",ST.add[i]);
    }
}
void Swap(int &a,int &b){
    int temp;
    temp=a;;
    a=b;
    b=temp;
}
void BubbleSort(Bubble &ST,int len){
    bool flag;
    for (int i=0;i<len-1;i++){
        flag=false;
        for(int j=ST.length-1;j>i;j--){
            if(ST.add[j-1]>ST.add[j]){
                Swap(ST.add[j-1],ST.add[j]);
                flag= true;
            }
        }
        if(flag==false)
            printf("ff");
    }
}

int main(){
    Bubble ST;
    InitBubble(ST,10);
    Printf(ST,10);
    printf("\n");
    BubbleSort(ST,10);
    Printf(ST,10);
    return 0;
}