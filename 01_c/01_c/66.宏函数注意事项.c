//#include <stdio.h>
//
//#define SQUARE(x) ((x) * (x))
//#define SUM(x, y) ((x) + (y))
//#define SWAP(T, x, y) {\
//T t = (x);\
//(x) = (y);\
//(y) = t;\
//}
//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//    //宏函数中的参数一定要用括号扩起来 以防止替换后的优先级问题
//    printf("%d\n", SQUARE(5));
//    printf("%d\n", SQUARE(3 + 2));
//    //宏函数的整个表达式也需要用括号扩起来 以防止替换后的优先级问题
//    printf("%d\n", SUM(3, 5));
//    printf("%d\n", 6 * SUM(3, 5));
//    //宏函数中的多条语句 应写成符合语句 以防止重复定义变量的问题发生
//    int a = 10;
//    int b = 20;
//    SWAP(int, a, b);
//    printf("a=%d, b=%d\n", a, b);
//    a = 50;
//    b = 60;
//    SWAP(int, a, b);
//    printf("a=%d, b=%d\n", a, b);
//    //在调用宏函数时 不要使用＋＋、－－运算符 以防止多次＋＋、－－
//    a = 3;
//    b = 4;
//    int r = MAX(a++, b++);
//    printf("a=%d, b=%d, r=%d\n", a, b, r);
//    
//    return 0;
//}
