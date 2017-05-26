//#include <stdio.h>
//#include <stdarg.h>
//
//int sum(int m, ...)//m代表其后还有几个参数
//{
//    int sum = 0;
//    va_list vap;//格式
//    va_start(vap, m);//格式 但m不是格式
//    for (int i = 0; i < m; i++) {
////        printf("%d ", va_arg(vap, int));//逐个获得变长的每个参数 这行代码和下一行代码不能一起出现
//        sum += va_arg(vap, int);
//    }
//    va_end(vap);//格式
//    
//    return sum;
//}
//
//int main()
//{
//    printf("%d\n", 10);
//    printf("%d,%f\n", 10, 3.14);
//    printf("%d,%f,%c\n", 10, 3.14, 'a');
//    
//    int s = sum(3, 10, 20, 30);
//    printf("sum=%d\n", s);
//    
//    return 0;
//}
