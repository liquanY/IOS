//#include <stdio.h>
//
//int main()
//{
//    //与运算
//    int a = 3;
//    int b = 4;
//    int c = 5;
//    int r = a && b;
//    printf("%d\n", r);
//    a = 0;
//    r = a && b;
//    printf("%d\n", r);
//    r = (a > b) && (b > c);
//    printf("%d\n", r);
//    r = (a < b) && (b < c);
//    printf("%d\n", r);
//    printf("\n");
//    
//    //或运算
//    a = 3;
//    b = 4;
//    c = 5;
//    r = a || b;
//    printf("%d\n", r);
//    a = 0;
//    r = a || b;
//    printf("%d\n", r);
//    r = (a > b) || (b < c);
//    printf("%d\n", r);
//    r = ((a < b) && (b < c)) || (c > a);
//    printf("%d\n", r);
//    printf("\n");
//    
//    //百分制成绩的容错
//    int score = 120;
//    if (score < 0 || score > 100) {
//        printf("您输入的不是百分制成绩\n");
//    }
//    printf("\n");
//    
//    //非运算
//    a = 3;
//    printf("%d\n", !a);
//    b = 4;
//    printf("%d\n", !(a > b));
//    printf("%d\n", !'a');
//    printf("%d\n", !"abc");
//    printf("\n");
//    
//    //短路:编辑器的一种优化方法 会删除不必要的代码
//    a = 3;
//    b = 4;
//    c = 5;
//    r = a > b && b > c++;
//    printf("a=%d, b=%d, c=%d, r=%d\n", a, b, c, r);
//    
//    return 0;
//}
