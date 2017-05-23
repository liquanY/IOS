//#include <stdio.h>
//
//int main()
//{
//    //左值:就是赋值号左边的值
//    //常量和表达式不能作为左值
//    int x;
//    x = 3;
//    
//    int y;
//    int z = x + (y = 5);
//    printf("x=%d,y=%d,z=%d\n", x, y, z);
//    
//    int a, b, c, d;
//    a = b = c = d = 1;//赋值运算符的结合性是从右向左的
//    
//    a = 10;
//    b = 20;
//    printf("%d\n", a == b);
//    printf("%d\n", a = b);
//    
//    x = 10;
//    x += 5;//等效于 x = x + 5;
//    printf("%d\n", x);
//    x -= 5;//等效于 x = x - 5;
//    printf("%d\n", x);
//    x *= 2;//等效于 x = x * 2;
//    printf("%d\n", x);
//    x /= 5;//等效于 x = x / 5;
//    printf("%d\n", x);
//    
//    x *= 3 + 2;//等效于 x = x * (3 + 2);
//    printf("%d\n", x);
//    
//    return 0;
//}
