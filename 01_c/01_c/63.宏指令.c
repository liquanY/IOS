//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SIZE 15
//#define PI 3.14
//#define NUM 20
//
//int main()
//{
//    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,0};
//    printf("请输入15个数\n");
//    for (int i = 0; i < SIZE; i++) {
//        scanf("%d", &a[i]);
//    }
//    int sum = 0;
//    for (int i = 0; i < SIZE; i++) {
//        sum += a[i];
//    }
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    printf("ave=%d\n", sum / SIZE);
//    
//    double area = PI * 5 * 5;
//    printf("area=%g\n",area);
//    
//    //找出随机数组中的最大值
//    srand((unsigned)time(0));
//    int b[NUM];
//    for (int i = 0; i < NUM; i++) {
//        b[i] = rand() % 100;
//    }
//    int max = b[0];
//    for (int i = 1; i < NUM; i++) {
//        if (max < b[i]) {
//            max = b[i];
//        }
//    }
//    for (int i = 0; i < NUM; i++) {
//        printf("%d ", b[i]);
//    }
//    printf("\n");
//    printf("max = %d\n", max);
//    
//    return 0;
//}
