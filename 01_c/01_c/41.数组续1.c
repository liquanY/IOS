//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    //数组的赋值
//    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//    a[0] = 10;
//    a[5] = 20;
//    for (int i = 0; i < 10; i++) {
//        a[i] = (i + 1) * 10;
//    }
//    
//    //数组的拷贝
//    int b[10];
//    for (int i = 0; i < 10; i++) {
//        b[i] = a[i];
//    }
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", b[i]);
//    }
//    printf("\n");
//    
//    //正向遍历
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    
//    //反向遍历
//    for (int i = 9; i >= 0; i--) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    
//    //从键盘输入一个整数 如12345 判断这个整数中的数字是否重复
//    int x;
//    printf("请输入一个整数:");
//    scanf("%d", &x);
//    int bs[10] = {0};
//    do {
//        int n = x % 10;
//        if (bs[n] == 1) {
//            printf("重复了\n");
//            break;
//        }
//        bs[n] = 1;
//        x /= 10;
//    } while (x);
//    if (x == 0) {
//        printf("没有重复\n");
//    }
//    
//    //求数组中最大值、最小值、平均值、和
//    srand((unsigned)time(0));
//    int c[10];
//    for (int i = 0; i < 10; i++) {
//        c[i] = rand() % 100;
//    }
//    int max = c[0];
//    int min = c[0];
//    int sum = c[0];
//    for (int i = 1; i < 10; i++) {
//        if (max < c[i]) {
//            max = c[i];
//        }
//        if (min > c[i]) {
//            min = c[i];
//        }
//        sum += c[i];
//    }
//    printf("max=%d,min=%d,sum=%d,ave=%f\n", max, min, sum, sum / 10.0);
//    
//    //双色球
//    int blue;
//    blue = rand() % 16 + 1;
//    int red[6];
//    for (int i = 0; i < 6; i++) {
//        red[i] = rand() % 33 + 1;
//        for (int j = 0; j < i; j++) {
//            if (red[i] == red[j]) {
//                i--;
//                break;
//            }
//        }
//    }
//    printf("蓝:%d\n", blue);
//    printf("红:");
//    for (int i = 0; i < 6; i++) {
//        printf("%d ", red[i]);
//    }
//    printf("\n");
//    
//    return 0;
//}
