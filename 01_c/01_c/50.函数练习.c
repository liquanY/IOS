//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int maxValue(int data[10])
//{
//    int max = data[0];
//    for (int i = 1; i < 10; i++) {
//        if (max < data[i]) {
//            max = data[i];
//        }
//    }
//    return max;
//}
//
//int minValue(int data[10])
//{
//    int min = data[0];
//    for (int i = 1; i < 10; i++) {
//        if (min > data[i]) {
//            min = data[i];
//        }
//    }
//    return min;
//}
//
//int sumValue(int data[10])
//{
//    int sum = 0;
//    for (int i = 0; i < 10; i++) {
//        sum += data[i];
//    }
//    return sum;
//}
//
//int power(int x, int n)
//{
//    if (n < 0) {
//        return 0;
//    }
//    if (n == 0) {
//        return 1;
//    }
//    if (n == 1) {
//        return x;
//    }
//    return x * power(x, n - 1);
//}
//
//int fn(int x)
//{
//    if (x == 1) {
//        return 1;
//    }
//    return x * fn(x - 1);
//}
//
//int main()
//{
//    //输出一组数的最大值、最小值、和
//    srand((unsigned)time(0));
//    int a[10];
//    for (int i = 0; i < 10; i++) {
//        a[i] = rand() % 100;
//    }
//    int max = maxValue(a);
//    int min = minValue(a);
//    int sum = sumValue(a);
//    printf("max=%d, min=%d, sum=%d\n", max, min, sum);
//    
//    //递归
//    int r = power(5, 3);
//    printf("5^3=%d\n", r);
//    
//    //求5的阶乘
//    int q = fn(5);
//    printf("q=%d\n", q);
//    
//    return 0;
//}
