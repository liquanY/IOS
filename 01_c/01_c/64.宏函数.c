//#include <stdio.h>
//
//#define MIN(x, y) ((x) < (y) ? (x) : (y))
//#define IS_ODD(x) ((x) % 2 != 0)
//#define LOWER(ch) ((ch) >= 'A' && (ch) <= 'Z' ? (ch) - 'A' + 'a' : (ch))
//#define PRINT(x, y) printf(#x"=%d, "#y"=%d\n", x, y)
//
//int main()
//{
//    printf("MIN(5, 4)=%d\n", MIN(5, 4));
//    
//    int a;
//    printf("请输入一个整数:");
//    scanf("%d", &a);
//    if (IS_ODD(a)) {
//        printf("%d是奇数\n", a);
//    } else {
//        printf("%d不是奇数\n", a);
//    }
//    
//    char c;
//    printf("请输入一个字符");
//    scanf("%*c");//清除键盘缓冲区
//    scanf("%c", &c);
//    printf("%c\n", LOWER(c));
//    
//    int x = 100;
//    int y = 200;
//    PRINT(x, y);
//    int m = 300;
//    int n = 400;
//    PRINT(m, n);
//    
//    printf("%d\n", __LINE__);//行号
//    printf("%s\n", __FILE__);//文件名
//    printf("%s\n", __DATE__);//编译日期
//    printf("%s\n", __TIME__);//编译时间
//    
//    return 0;
//}
