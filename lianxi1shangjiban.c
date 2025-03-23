#include <stdio.h>
 
int isLeapYear(int year) {
    // 闰年的判断规则：能被4整除且（不能被100整除或能被400整除）
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}
 
int main() {
    int year, month, day;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("请输入年份、月份和日期（格式：年 月 日）：");
    if (scanf("%d %d %d", &year, &month, &day) != 3) {
        printf("输入无效，请输入正确的年份、月份和日期。\n");
        return 1;
    }
 
    // 检查年份是否合法
    if (year <= 0) {
        printf("年份不合法，请输入一个正整数。\n");
        return 1;
    }
 
    // 检查月份是否合法
    if (month < 1 || month > 12) {
        printf("月份不合法，请输入1到12之间的数字。\n");
        return 1;
    }
 
    // 检查日期是否合法
    if (isLeapYear(year)) {
        daysInMonth[1] = 29; // 闰年2月有29天
    }
 
    if (day < 1 || day > daysInMonth[month - 1]) {
        printf("日期不合法，请输入有效的日期。\n");
        return 1;
    }
 
    // 计算从1月1日到输入日期的天数
    int totalDays = 0;
    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays += day; // 加上当前月份的天数
 
    printf("%d年%d月%d日是该年的第%d天\n", year, month, day, totalDays);
 
    return 0;
}
