#include <stdio.h>
#include <stdlib.h>

void change(char *&n){
    n=(char *)malloc(100);
    fgets(n,100,stdin);
}
int main(){
    char *p=NULL;
    change(p);
    puts(p);
    free(p);
    return 0;
}