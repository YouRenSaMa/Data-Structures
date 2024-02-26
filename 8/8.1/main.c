#include <stdio.h>

typedef struct students{
    int sno;
    char name[20];
    char sex;
}stu;
int main(){
    stu s;
    scanf("%d%s %c",&s.sno,&s.name,&s.sex);
    printf("%d %s %c\n",s.sno,s.name,s.sex);
    return 0;
}
