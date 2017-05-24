//#include <stdio.h>
//
//int main()
//{
//    int a[5] = {10, 20, 30, 40, 50};
//    int *p1 = &a[0];
//    p1++;
//    printf("*p1=%d\n", *p1);
//    p1 = p1 + 3;
//    printf("*p1=%d\n", *p1);
//    
//    int *p2 = &a[4];
//    printf("*p2=%d\n", *(p2 - 2));
//    p2--;
//    printf("*p2=%d\n", *p2);
//    p2 = p2 - 3;
//    printf("*p2=%d\n", *p2);
//    
//    //两个指针不能相加
//    
//    p1 = &a[0];
//    p2 = &a[4];
//    int f = *(p1++);
//    printf("f=%d,*p1=%d\n", f, *p1);
//    f = *(++p1);
//    printf("f=%d,*p1=%d\n", f, *p1);
//    f = (*p1)++;
//    printf("f=%d,*p1=%d\n", f, *p1);
//    
//    return 0;
//}
