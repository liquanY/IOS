//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int a = 10;
//    int *p = &a;
//    printf("a=%d\n", *p);//*p是一个有名的变量
//    
//    p = (int*)malloc(sizeof(int));//向堆区申请一块空间
//    *p = 20;//*p是一个无名的变量
//    printf("*p=%d\n", *p);
//    free(p);//向堆区归还一块空间
//    
//    double *pd = (double*)malloc(sizeof(double));
//    *pd = 3.14;
//    printf("%lf\n", *pd);
//    free(pd);
//    
//    long *pl = (long*)malloc(sizeof(long));
//    *pl = 123456789012345;
//    printf("%ld\n", *pl);
//    free(pl);
//    printf("%p,%ld\n", pl, *pl);
//    
//    int *p1 = (int*)malloc(sizeof(int) * 5);//向堆空间申请一个数组
//    *p1 = 10;
//    *(p1 + 1) = 20;
//    p1[1] = 20;
//    for (int i = 0; i < 5; i++) {
//        p1[i] = (i + 1) * 10;
//    }
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", p1[i]);
//    }
//    printf("\n");
//    free(p1);
//    
//    char *str = (char*)malloc(sizeof(char) * 100);//向堆空间申请一个字符数组 char str[100];
//    printf("请输入一个字符串:");
//    scanf("%s", str);
//    printf("%s\n", str);
//    free(str);
//    
//    return 0;
//}
