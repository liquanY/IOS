//#include <stdio.h>
//
//int power(int x)//变量x是形参 将实参赋值给形参
//{
//    printf("in power x = %d\n", x);
//    return x * x;
//}
//
//int plus(int x)//值传递:实参赋值给形参后 形参在函数体内发生的变化 不会传回给实参
//{
//    x++;
//    printf("in plus x = %d\n", x);
//    return 0;
//}
//
//int fa()
//{
//    printf("in fa\n");
//    return 0;
//}
//
//int fb(void)
//{
//    printf("in fb\n");
//    return 0;
//}
//
//int add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    int r = power(10);//常量10是实参
//    printf("in main r = %d\n", r);
//    
//    r = 10;
//    plus(r);
//    printf("in main r = %d\n", r);
//    
//    fa();//当形参中无参数时 有实参 实参会被忽略
//    //fb(1, 2, 3);//形参指定void后 不能有实参
//    fb();
//    add(3, 5);
//    add(3.14, 2.68);//当形参与实参的类型不一致时 以形参为准进行转换
//    
//    return 0;
//}
