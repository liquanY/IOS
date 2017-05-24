//#include <stdio.h>
//#include <stdbool.h>
//
////写一个函数 判断参数x和y是否都落在0~n的区间内
//bool check(int x, int y, int n)
//{
//    return x >= 0 && x <= n && y >= 0 && y <= n;
//}
//
////写一个函数 用来判断一个整数是不是素数
//bool isPrimer(int x)
//{
//    if (x < 2) {
//        return false;
//    }
//    for (int i = 2; i < x; i++) {
//        if (x % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    bool in = check(3, 5, 4);
//    printf("%d\n", in);
//    
//    bool p = isPrimer(5);
//    printf("%d\n", p);
//    p = isPrimer(91);
//    printf("%d\n", p);
//    
//    for (int i = 1; i <= 100; i++) {
//        if (isPrimer(i)) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//    
//    return 0;
//}
