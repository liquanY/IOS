//#include <stdio.h>
//
//int* add10(int *x)
//{
//    (*x) += 10;
//    return x;
//}
//
//int* get()
//{
//    int x = 12345;
//    x = 12345;//为了不报错
//    return 0;//局部变量的地址不能作为返回值 因为这个地址会变成公共的区域 这里本来要写&x
//}
//
//void get2()
//{
//    int y = 54321;
//    y = 54321;//为了不报错
//}
//
//int* get3()
//{
//    static int x = 55555;
//    return &x;
//}
//
//int main()
//{
//    int a = 10;
//    int *p = add10(&a);
//    printf("a=%d,*p=%d\n", a, *p);
//    
//    p = get3();
//    get2();
//    printf("*p=%d\n", *p);
//    
//    return 0;
//}
