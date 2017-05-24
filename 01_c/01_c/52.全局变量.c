//#include <stdio.h>
//
//int g1 = 10;//全局变量
//
//void fb()
//{
//    g1++;
//}
//
//int g2 = 100;//全局变量的作用域是从其定义开始 向下到文件尾
//int abc;//全局变量定义后 若不给它初始化 则系统将其清零
//
//void fc()
//{
//    printf("abc=%d\n", abc);
//    int g2 = 200;//当局部变量与全局变量同名时 局部变量会隐藏全局变量
//    printf("g2=%d\n", g2);
//    
//    {
//        int g2 = 100;
//        printf("g2=%d\n", g2);
//    }
//    printf("g2=%d\n", g2);
//}
//
//int main()
//{
//    auto int a = 10;
//    printf("a=%d\n",a);
//    g1++;
//    fb();
//    printf("g1=%d\n", g1);
//    fc();
//    printf("g2=%d\n", g2);
//    
//    return 0;
//}
