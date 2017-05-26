//#include <stdio.h>
//
//int main()
//{
//    const int x = 1;//const关键字会将变量x变成只读的 只读变量不能作为左值
//    printf("x=%d\n",x);
//    
//    int i = 10;
//    const int *p = &i;//*p不能改
//    printf("%d\n", *p);
//    i = 20;
//    printf("%d\n", *p);
//    int j = 30;
//    p = &j;//指针本身可以修改
//    printf("%d\n", *p);
//    
//    int* const p1 = &i;//p1不能改
//    *p1 = 100;//指针指向的空间可以修改
//    printf("i=%d\n", *p1);
//    
//    return 0;
//}
