//#include <stdio.h>
//
//struct Size1
//{
//    char ch;
//    int i;
//};
//
//struct Size2
//{
//    int i;
//    char ch;
//    double d;
//};
//
//struct Size3
//{
//    int i;
//    double d;
//    char ch;
//};
//
//int main()
//{
//    //字符对齐规则
//    //找出占存储空间最大的成员
//    //以其为单位分配存储空间
//    //每个成员存放在偏移量对该成员所占字节数取余为0处
//    struct Size1 s1;
//    printf("%lu\n", sizeof(s1));
//    struct Size2 s2;
//    printf("%lu\n", sizeof(s2));
//    struct Size3 s3;
//    printf("%lu\n", sizeof(s3));
//    
//    return 0;
//}
