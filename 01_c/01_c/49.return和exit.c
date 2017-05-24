//#include <stdio.h>
//#include <stdlib.h>
//
//int get(double x)
//{
//    return x++;//如果x的类型与函数的返回值类型不一致 以函数的返回值类型进行转换
//}
//
//int fa()
//{
//    return 0;//不能使用return语句返回两个以上的值
//}
//
//void printInt(int x)//当函数不返回值时 可将函数的返回值类型定义为void
//{
//    printf("x=%d\n", x);
//}
//
//void show(int x)
//{
//    switch (x) {
//        case 1:
//            printf("x==1\n");
//            break;
//        case 2:
//            printf("x==2\n");
//            break;
//        case 3:
//            printf("x==3\n");
//            break;
//        case 4:
//            exit(0);//可以在程序的任意位置 直接退出整个程序
//    }
//    printf("aaaaa\n");
//}
//
//int main()
//{
//    int c = get(12345);
//    printf("c=%d\n", c);
//    double c1 = get(123.45);
//    printf("c1=%g\n", c1);
//    
//    int r = fa();
//    printf("r=%d\n", r);
//    
//    show(2);
//    printf("此语句可以被打印出来\n");
//    show(4);
//    printf("此语句不能被打印出来\n");
//    
//    return 0;
//}
