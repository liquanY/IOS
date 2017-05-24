//#include <stdio.h>
//
//void plus(int x)//值传递
//{
//    x++;
//    printf("in plus x=%d\n", x);
//}
//
//void increment(int *p)//地址传递
//{
//    (*p)++;
//    printf("in increment *p=%d\n", *p);
//}
//
//void power(int *x)
//{
//    (*x) *= (*x);
//}
//
//void swap(int *a, int *b)
//{
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//
//void get(int *a, int *b)
//{
//    *a = 10;
//    *b = 20;
//}
//
//int main()
//{
//    int a = 10;
//    plus(a);
//    printf("in main a=%d\n", a);
//    increment(&a);
//    printf("in main a=%d\n", a);
//    power(&a);
//    printf("a=%d\n", a);
//    
//    int x = 10;
//    int y = 20;
//    printf("x=%d,y=%d\n", x, y);
//    swap(&x, &y);
//    printf("x=%d,y=%d\n", x, y);
//    
//    x = 0;
//    y = 0;
//    get(&x, &y);
//    printf("x=%d,y=%d\n", x, y);
//    
//    return 0;
//}
