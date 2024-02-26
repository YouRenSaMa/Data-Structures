#include<stdio.h>
#define maxsize 50
typedef int ElemType;
typedef struct {
    ElemType data[maxsize];//定义数组
    int length;//表的长度
}SqList;

bool ListInsert(SqList &l, int n, ElemType &e){//l为顺序表，n为插入第n个位序，e为插入的值
    if(n<1||n>l.length+1){//判断插入n的位置是否合法
        return false;
    }
    if(l.length==maxsize){//判断数组的空间是否满足
        return false;
    }
    for(int i=l.length;i>=n;i--){
        l.data[i]=l.data[i-1];
    }
    l.data[n-1]=e;
    l.length++;
    return true;
}

bool ListDel(SqList &l,int a,ElemType &f){//l为顺序表，a为插入第a个位序，f为保存第n个的值
    if(a<1||a>l.length){//判断删除a的位置是否合法
        return false;
    }
    f=l.data[a-1];
    for(int i=a-1;i<l.length;i++){

        l.data[i]=l.data[i+1];
    }
    l.length--;
    return true;
}
void PrintfList(SqList l){

    for(int i=0;i<l.length;i++){
        printf("%d",l.data[i]);
    }
    printf("\n");
}
int main(){
    SqList l;
    int n;
    int a;
    l.data[0]=1;
    l.data[1]=2;
    l.data[2]=3;
    l.length=3;
    scanf("%d",&n);
    scanf("%d",&a);
    ListInsert(l,n,n);
    PrintfList(l);
    ListDel(l,a,a);
    PrintfList(l);
}
