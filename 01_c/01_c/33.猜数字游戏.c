//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    srand((unsigned)time(0));
//    int num;
//    num = rand() % 100 + 1;
//    
//    int guess = 0;
//    while (guess != num) {
//        printf("请输入你猜测的数字(1~100):");
//        if (scanf("%d", &guess) != 1) {
//            printf("请输入数字\n");
//            return 0;
//        }
//        if (guess > num) {
//            printf("大了\n");
//        } else if (guess < num) {
//            printf("小了\n");
//        }
//    }
//    printf("恭喜,你猜对了!\n");
//    
//    return 0;
//}
