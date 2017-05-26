//#include <stdio.h>
//
//union U
//{
//    int x;
//    int y;
//    int z;
//};
//
//union U1
//{
//    int i;
//    double d;
//};
//
//union U2
//{
//    double price;
//    double salary;
//};
//
//int main()
//{
//    union U u1;
//    u1.x = 200;
//    printf("%d,%d,%d\n", u1.x, u1.y, u1.z);
//    printf("%lu\n", sizeof(u1));
//    u1.y = 100;
//    printf("%d,%d,%d\n", u1.x, u1.y, u1.z);
//    printf("%p\n%p\n%p\n", &u1.x, &u1.y, &u1.z);
//    
//    union U1 u;
//    u.i = 10;
//    printf("%d,%lf\n", u.i, u.d);
//    u.d = 3.1415926;
//    printf("%d,%lf\n", u.i, u.d);
//    
//    return 0;
//}
