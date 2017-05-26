//#include <stdio.h>
//
//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//#define IS_EVEN(x) ((x) % 2 == 0)
//#define UPPER(ch) ((ch) >= 'a' && (ch) <= 'z' ? (ch) - 'a' + 'A' : (ch))
//#define SWAP(T, x, y) {\
//T t = x;\
//x = y;\
//y = t;\
//}
//
//int main()
//{
//    printf("%d\n", MAX(4, 7));
//    
//    int a;
//    printf("请输入一个整数:");
//    scanf("%d", &a);
//    if (IS_EVEN(a)) {
//        printf("%d是一个偶数\n", a);
//    } else {
//        printf("%d是一个奇数\n", a);
//    }
//    
//    char c;
//    printf("请输入一个字符:");
//    scanf("%*c");
//    scanf("%c", &c);
//    printf("%c\n", UPPER(c));
//    
//    int x = 10;
//    int y = 20;
//    printf("x=%d,y=%d\n", x, y);
//    SWAP(int, x, y);
//    printf("x=%d,y=%d\n", x, y);
//    
//    float f1 = 3.14;
//    float f2 = 2.68;
//    SWAP(float, f1, f2);
//    printf("f1=%lf,f2=%lf\n", f1, f2);
//    
//    return 0;
//}
