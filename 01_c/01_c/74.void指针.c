//#include <stdio.h>
//
//enum Type
//{
//    INT, FLOAT, DOUBLE, CHAR
//};
//
//void print(void *data, enum Type type)
//{
//    switch (type) {
//        case INT:
//            printf("%d\n", *(int*)data);
//            break;
//        case FLOAT:
//            printf("%f\n", *(float*)data);
//            break;
//        case DOUBLE:
//            printf("%lf\n", *(double*)data);
//            break;
//        case CHAR:
//            printf("%c\n", *(char*)data);
//            break;
//        default:
//            break;
//    }
//}
//
//int main()
//{
//    int x = 10;
//    int *px = &x;//只能是同类型的指针指向同类型的变量
//    printf("%d\n", *px);
//    
//    void *p = &x;//万能指针：该指针可以指向任意数据类型的地址
//    printf("%d\n", *(int*)p);
//    float f = 3.14;
//    p = &f;
//    printf("%f\n", *(float*)p);
//    double d = 2.68;
//    p = &d;
//    printf("%lf\n", *(double*)p);
//    char *str = "Hello World!";
//    p = str;
//    printf("%s\n", (char*)p);
//    
//    //打印任意类型变量的内存数据
//    int a = 10;
//    print(&a, INT);
//    
//    float f1 = 3.14;
//    print(&f1, FLOAT);
//    
//    double d1 = 2.68;
//    print(&d1, DOUBLE);
//    
//    char ch = 'a';
//    print(&ch, CHAR);
//    
//    return 0;
//}
