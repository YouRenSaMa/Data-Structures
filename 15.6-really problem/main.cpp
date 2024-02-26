#include<stdio.h>

int middest(int *A,int *B,int len){
    int s1=0,d1=len-1,m1,m2,s2=0,d2=len-1;
    while(s1!=d1||s2!=d2){
        m1=(s1+d1)/2;
        m2=(s2+d2)/2;
        if(A[m1]>B[m2]){
            if((s1+d1)%2==0){
                d1=m1;
                s2=m2;
            }else{
                d1=m1;
                s2=m2+1;
            }
        }else if(A[m1]<B[m1]){
            if((s1+d1)%2==0){
                s1=m1;
                d2=m2;
            }else{
                d2=m2;
                s1=m1+1;
            }
        }else{
            return A[m1];
        }
    }
    return A[s1]>B[s2]?B[s2]:A[s1];
}

int main() {
    int A[5]={11,13,15,17,19};
    int B[5]={2,4,6,8,20};
    int mid=middest(A,B,5);
    printf("%d\n",mid);
    return 0;
}
