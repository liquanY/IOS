//#include <stdio.h>
//
//int main()
//{
//    int a[5];
//    printf("%lu\n", sizeof(a));
//    a[0] = 10;
//    a[1] = 20;
//    a[2] = 30;
//    a[3] = 40;
//    a[4] = 50;
//    for (int i = 0; i < 5; i++) {
//        a[i] = (i + 1) * 10;
//    }
//    for (int i = 0; i < 5; i++) {
//        printf("请输入第%d个学生的成绩:", i + 1);
//        scanf("%d", &a[i]);
//    }
//    
//    printf("%d,%d,%d,%d,%d\n", a[0], a[1], a[2], a[3], a[4]);
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//    
//    //数组初始化
//    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", b[i]);
//    }
//    printf("\n");
//    
//    int c[10] = {1, 2, 3, 4, 5};//未给值的元素将被清零
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", c[i]);
//    }
//    printf("\n");
//    
//    int f[5] = {1, 2, 3, 4, 5};//多余的初始值会被直接丢弃
//    for (int i = 0; i < 5; i++) {
//        printf("%d ",f[i]);
//    }
//    printf("\n");
//    
//    int g[] = {1, 2, 3, 4, 5};
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", g[i]);
//    }
//    printf("\n");
//    
//    int h[5] = {[2] = 20, [0] = 5, [4] = 40};
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", h[i]);
//    }
//    printf("\n");
//    
//    int j[] = {[2] = 20, [5] = 50, [0] = 10};
//    for (int i = 0; i < 6; i++) {
//        printf("%d ", j[i]);
//    }
//    printf("\n");
//    
//    //定义一个数组 将数组中的所有元素向前移动一位 第一个元素移到最后
//    int k[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//    int t = k[0];
//    for (int i = 0; i < 9; i++) {
//        k[i] = k[i + 1];
//    }
//    k[9] = t;
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", k[i]);
//    }
//    printf("\n");
//    
//    //数组名就是数组第一个元素的地址
//    int l[10];
//    printf("%p\n", &l[0]);
//    printf("%p\n", l);
//    
//    return 0;
//}
