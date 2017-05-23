//#include <stdio.h>
//
//int main()
//{
//    int sum = 0;
//    int i = 1;
//    do {
//        sum += i;
//        i++;
//    } while (i <= 100);
//    printf("sum=%d\n", sum);
//    
//    int x = 0;
//    do {
//        printf("%d ", x);
//        x++;
//    } while (x < 10);
//    printf("\n");
//    
//    double money;
//    printf("请输入您要取的钱数:");
//    do {
//        scanf("%lf", &money);
//        if (money <= 0) {
//            printf("输入错误,请重新输入:");
//        }
//    } while (money <= 0);
//    printf("%.2lf\n", money);
//    
//    int fun;
//    do {
//        printf("1.打开文件\n");
//        printf("2.保存文件\n");
//        printf("3.退出\n");
//        printf("请输入选择的功能:");
//        scanf("%d", &fun);
//    } while (fun != 3);
//    
//    return 0;
//}
