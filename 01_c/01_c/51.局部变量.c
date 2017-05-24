//#include <stdio.h>
//
//void fa(int x)//形参x就是一份局部变量
//{
//    x++;
//    printf("in fa x=%d\n", x);
//    
//    int y = 20;//定义在函数体内的变量也是局部变量
//    printf("in fa y=%d\n", y);
//    
//    if (x) {
//        int a = 10;//定义在复合语句中的变量同样是局部变量
//        printf("a=%d\n", a);
//    }
//    
//    for (int i = 0; i < 10; i++) {//变量i是局部变量 仅在循环体的复合语句中起作用
//        printf("%d ", i);
//    }
//    printf("\n");
//    
//    {//直接形成复合语句
//        int b = 20;
//        b++;
//        int a[100];
//        a[0] = 100;
//    }
//}
//
//int main()
//{
//    int r = 10;
//    fa(r);
//    printf("in main r=%d\n", r);
//    
//    int y = 100;
//    printf("in main y=%d\n", y);
//}
