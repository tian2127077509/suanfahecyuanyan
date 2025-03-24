#include<stdio.h>

int sawp(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b,c;
    printf("请输入三个整数：",a,b,c);
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        sawp(&a,&b);
    }
    if(a>c){
        sawp(&a,&c);
    }
    if(b>c){
        sawp(&b,&c);
    }
    printf("排序后结果为：%d %d %d\n",a,b,c);
    return 0;
}
