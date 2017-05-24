//#include <stdio.h>
//
//void print(int data[], int size)
//{
//    for (int i = 0; i < size; i++) {
//        printf("%d ", data[i]);
//    }
//    printf("\n");
//}
//
//void increment(int *data, int size)
//{
//    for (int i = 0; i < size; i++) {
//        data[i]++;
//    }
//}
//
//int main()
//{
//    //指针指向数组后的使用
//    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//    int *p = a;
//    printf("a[0]=%d, *p=%d\n", a[0], *p);
//    printf("%d\n", *(p + 3));
//    printf("%d, %d\n", a[3], *(a + 3));
//    printf("%d, %d\n", *(p + 3), p[3]);
//    
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", *(p + i));
//    }
//    printf("\n");
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", *(a + i));
//    }
//    printf("\n");
//    
//    for (int i = 0; i < 10; i++, p++) {
//        printf("%d ", *p);
//    }
//    printf("\n");
//    p = a;
//    for (int i = 0; i < 10; i++, p++) {
//        printf("%d ", *p);
//    }
//    printf("\n");
//    
//    //数组形参
//    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//    print(b, 10);
//    printf("%lu\n", sizeof(b));
//    
//    int c[5] = {11, 22, 33, 44, 55};
//    print(c, 5);
//    
//    print((int[3]){100, 200, 300}, 3);
//    
//    increment(b, 10);
//    print(b, 10);
//    
//    return 0;
//}
