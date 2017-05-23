//#include <stdio.h>
//
//int main()
//{
//    int x;
//    printf("请输入一个整数:");
//    scanf("%d", &x);
//    
//    if (x >= 3) {
//        printf("x>=3\n");
//    } else if (x >= 2) {
//        printf("x>=2\n");
//    } else if (x >= 1) {
//        printf("x>=1\n");
//    } else {
//        printf("other\n");
//    }
//    
//    printf("请输入今天的天气情况(0:晴,1:阴,2:多云,3:下雨):");
//    scanf("%d", &x);
//    if (x == 0) {
//        printf("打太极\n");
//    } else if (x == 1) {
//        printf("爬香山\n");
//    } else if (x == 2) {
//        printf("约会\n");
//    } else if (x == 3) {
//        printf("睡觉\n");
//    } else {
//        printf("上班\n");
//    }
//    
//    //将输入的成绩转换成等级成绩
//    int score;
//    printf("请输入一个百分制成绩:");
//    scanf("%d", &score);
//    
//    if (score > 100) {
//        printf("这不是一个百分制成绩");
//        return 0;//直接结束程序
//    }
//    if (score < 0) {
//        printf("这不是一个百分制成绩");
//        return 0;//直接结束程序
//    }
//    if (score >= 90) {
//        printf("优秀\n");
//    } else if (score >= 60) {
//        printf("一般\n");
//    } else {
//        printf("不及格\n");
//    }
//    
//    return 0;
//}
