//#include <stdio.h>
//
//int main()
//{
//    int sum = 0;
//    for (int i = 1; i <= 100; i++) {
//        sum = sum + i;
//    }
//    printf("%d\n", sum);
//    
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", i);
//    }
//    printf("\n");
//    
//    for (int i = 0; i < 10; i +=2) {
//        printf("%d ", i);
//    }
//    printf("\n");
//    
//    for (int i = 1; i < 10; i +=2) {
//        printf("%d ", i);
//    }
//    printf("\n");
//    
//    //1+3+5+7+...+99
//    sum = 0;
//    for (int i = 1; i < 100; i +=2) {
//        sum += i;
//    }
//    printf("%d\n", sum);
//    
//    //求[a,b](a<b)的和
//    int a;
//    int b;
//    printf("请输入a的值:");
//    scanf("%d", &a);
//    printf("请输入b的值:");
//    scanf("%d", &b);
//    sum = 0;
//    for (int i = a; i <= b; i++) {
//        sum += i;
//    }
//    printf("%d\n", sum);
//    
//    //求圆周率
//    double pi = 0;
//    for (int n = 1; n < 1000000000; n += 4) {
//        pi += 1.0 / n - 1.0 / (n + 2);
//    }
//    pi *= 4;
//    printf("%lf\n", pi);
//    
//    //for语句的三个表达式的特殊用法
//    //表达式一可以为空 表达式二可以为空 表达式三可以为空 表达式一、三可以是逗号表达式
//    
//    return 0;
//}
