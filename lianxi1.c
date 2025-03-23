#include<stdio.h>

int isLeapyear(int year){
    if((year%4==0&&year%100 != 0)||(year%400==0)){
        return 1;
    }
    return 0;
}
int main(){
    int year,month,day;
    int daysinmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int total=0;
    printf("请输入一个日期（格式为：年 月 日）：");
    scanf("%d %d %d",&year,&month,&day);
    if(isLeapyear(year)){
        daysinmonth[1]=29;
    }
    for(int i=0;i<month-1;i++){
        total += daysinmonth[i];
    }
    total+=day;
    printf("%d年%d月%d日是%d年的第%d天\n",year,month,day,year,total);

}
