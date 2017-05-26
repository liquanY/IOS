//#include <stdio.h>
//
//void fa()
//{
//    printf("in fa\n");
//}
//
//void fb()
//{
//    printf("in fb\n");
//}
//
//void invoke(void (*f)())
//{
//    printf("调用传进来的函数\n");
//    f();
//}
//
//int main()
//{
//    printf("%p\n", fa);//函数名是一个地址 指向该函数的第一条语句的地址
//    void (*pf)();
//    pf = fa;//当函数指针指向一个函数名时 该指针可以像函数名一样调用函数
//    pf();
//    pf = fb;
//    pf();
//    
//    invoke(fa);
//    invoke(fb);
//    
//    return 0;
//}
