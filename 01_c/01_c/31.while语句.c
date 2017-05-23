//#include <stdio.h>
//
//int main()
//{
//    int sum = 0;
//    int i = 1;
//    while (i <= 100) {
//        sum += i;
//        i++;
//    }
//    printf("sum=%d\n", sum);
//    
//    int x = 0;
//    while (x < 10) {
//        printf("%d ", x);
//        x++;
//    }
//    printf("\n");
//    
//    int n = 10;
//    x = 1;
//    while (x < n) {
//        printf("%d\t\t%d\n", x, x * x);
//        x++;
//    }
//    
//    double money = 0;
//    printf("请输入您要取的钱数:");
//    while (money <= 0) {
//        scanf("%lf", &money);
//        if (money <= 0) {
//            printf("输入错误,请重新输入:");
//        }
//    }
//    printf("%.2lf\n", money);
//    
//    int num1 = 0;
//    int num2 = 0;
//    int num = 1;
//    while (num != 0) {
//        printf("请输入一个整数,输入0时结束程序:");
//        if (scanf("%d", &num) != 1) {
//            printf("应该输入数字\n");
//            return 0;
//        }
//        if (num > 0) {
//            num1++;//输入的正数的个数
//        }
//        if (num < 0) {
//            num2++;//输入的负数的个数
//        }
//    }
//    printf("输入了%d个正数,%d个负数\n", num1, num2);
//    
//    return 0;
//}
