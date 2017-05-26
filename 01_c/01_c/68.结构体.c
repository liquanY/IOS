//#include <stdio.h>
//#include <string.h>
//
//struct Example//用关键字struct定义一个结构体 结构体名时Example
//{
//    int i;//结构体成员
//    char ch;
//    double d;
//};
//
//struct Student//可以将零散的信息打包在一起成为一个整体
//{
//    char name[20];
//    int ID;
//    char address[100];
//};
//
//int main()
//{
//    struct Example s;//struct Example是类型名 s时变量名
//    s.i = 10;
//    s.ch = 'a';
//    s.d = 3.14;
//    printf("%d, %c, %lf\n", s.i, s.ch, s.d);
//    scanf("%d", &s.i);
//    scanf("%c", &s.ch);
//    scanf("%lf", &s.d);
//    
//    char str[100];
//    strcpy(str, "Hello World");
//    struct Student stu;
//    strcpy(stu.name, "zhangsan");//结构体变量的字符数组成员在赋值时 要使用strcpy
//    stu.ID = 1000;
//    strcpy(stu.address, "JiangSu NanJing");
//    
//    return 0;
//}
