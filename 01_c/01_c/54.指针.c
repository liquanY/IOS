//#include <stdio.h>
//
//int main()
//{
//    int x = 10;
//    int *p = &x;//指针是一种新的数据 需要一种新类型的变量来保存 这种变量叫做指针变量
//    printf("%lu\n", sizeof(p));//所有指针都占用8字节
//    printf("%p\n", p);
//    
//    *p = 20;
//    printf("x=%d\n", x);
//    
//    double d = 3.14;
//    double *pd = &d;
//    *pd = 2.68;
//    printf("d=%g\n", d);
//    
//    char ch = 'a';
//    char *pch = &ch;
//    *pch = 'b';
//    printf("ch=%c\n", ch);
//    
//    unsigned u = 100U;
//    unsigned *pu = &u;
//    *pu = 200U;
//    printf("u=%u\n", u);
//    
//    int *pa;
//    int m;
//    printf("pa=%lu, m=%lu\n", sizeof(pa), sizeof(m));
//    
//    int l = 100;
//    int *pl = &l;
//    int l1 = 200;
//    
//    pl = &l1;//指针pl指向l 改指向了l1
//    *pl = 500;
//    printf("%d\n",*pl);
//    
//    return 0;
//}
