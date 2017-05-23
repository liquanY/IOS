//#include <stdio.h>
//
//int main()
//{
//    int year;
//    printf("请输入一个年份:");
//    scanf("%d", &year);
//    
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
//        printf("闰年\n");
//    } else {
//        printf("平年\n");
//    }
//    
//    //从键盘输入一个年份和月份值 输出该年该月的天数
//    int year1;
//    int month;
//    printf("请输入一个年份:");
//    scanf("%d", &year1);
//    printf("请输入一个月份:");
//    scanf("%d", &month);
//    
//    int days = 31;
//    if (month == 4 || month == 6 || month == 9 || month ==11) {
//        days = 30;
//    } else if (month == 2) {
//        days = 28 + (year1 % 400 == 0 || (year1 % 4 == 0 && year1 % 100 != 0));
//    }
//    printf("%d年%d月有%d天\n", year1, month, days);
//    
//    return 0;
//}
