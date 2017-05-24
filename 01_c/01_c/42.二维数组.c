//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    //二维数组
//    int a[3][4];
//    a[0][0] = 10;
//    a[0][2] = 20;
//    a[1][1] = 30;
//    a[2][3] = 40;
//    
//    //二维数组的初始化
//    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            printf("%d ", b[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    
//    int c[2][3] = {0};
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            printf("%d ", c[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    
//    int d[3][3] = {{1, 2, 3}, {4, 5}, {7, 8, 9}};
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            printf("%d ", d[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    
//    int e[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10}};
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 3; j++) {
//            printf("%d ", e[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//    
//    //二维数组的数组名
//    int f[3][4];
//    printf("%p\n", f);
//    printf("%p\n", f[0]);
//    printf("%p\n", &f[0][0]);
//    
//    printf("%p\n", f[1]);
//    printf("%p\n", &f[1][0]);
//    
//    //二维数组与二维表
//    double table[10][3] = {
//        {0*0, 0*0*0, sqrt(0)},
//        {1*1, 1*1*1, sqrt(1)},
//        {2*2, 2*2*2, sqrt(2)},
//        {3*3, 3*3*3, sqrt(3)},
//        {4*4, 4*4*4, sqrt(4)},
//        {5*5, 5*5*5, sqrt(5)},
//        {6*6, 6*6*6, sqrt(6)},
//        {7*7, 7*7*7, sqrt(7)},
//        {8*8, 8*8*8, sqrt(8)},
//        {9*9, 9*9*9, sqrt(9)},
//    };
//    int n;
//    printf("请输入查询的数字:");
//    scanf("%d", &n);
//    printf("%d的平方是%g,立方是%g,平方根是%g\n", n, table[n][0], table[n][1], table[n][2]);
//    
//    return 0;
//}
