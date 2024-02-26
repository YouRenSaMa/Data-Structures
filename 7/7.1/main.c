#include <stdio.h>

int step(int n){
    if(n==1||n==2){
        return n;
    }
    return step(n-1)+ step(n-2);
}
int main(){
    int i;
    scanf("%d",&i);
    step(i);
    printf("%d", step(i));
    return 0;
}