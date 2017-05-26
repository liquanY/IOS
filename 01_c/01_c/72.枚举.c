//#include <stdio.h>
//
//enum Week
//{
//    MONDAY = 100, TUESDAY = 200, WEDNESDAY, THURSDAY = 400, FRIDAY, SATURDAY, SUNDAY
//};
//
//enum
//{
//    kEmpty,
//    kWhite,
//    kBlack
//};
//
//enum Season
//{
//    SPRING = 1, SUMMER, AUTUMN, WINTER
//};
//
//int main()
//{
//    int day;
//    printf("请输入一个1～7之间的整数:");
//    scanf("%d", &day);
//    ;//容错 保证输入的是1～7之间的数
//    switch (day - 1) {
//        case MONDAY:
//            printf("星期一\n");
//            break;
//        case TUESDAY:
//            printf("星期二\n");
//            break;
//        case WEDNESDAY:
//            printf("星期三\n");
//            break;
//        case THURSDAY:
//            printf("星期四\n");
//            break;
//        case FRIDAY:
//            printf("星期五\n");
//            break;
//        case SATURDAY:
//            printf("星期六\n");
//            break;
//        case SUNDAY:
//            printf("星期日\n");
//            break;
//        default:
//            break;
//    }
//    
//    printf("%d,%d,%d\n", kEmpty, kWhite, kBlack);
//    
//    enum Week week;
//    week = MONDAY;
//    week = SUNDAY;
//    printf("%d\n", week);
//    printf("%d,%d,%d,%d,%d\n", MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY);
//    
//    printf("%lu\n", sizeof(week));
//    
//    int s;
//    printf("请输入一个1～4之间的整数:");
//    scanf("%d", &s);
//    switch (s) {
//        case SPRING:
//            printf("春天\n");
//            break;
//        case SUMMER:
//            printf("夏天\n");
//            break;
//        case AUTUMN:
//            printf("秋天\n");
//            break;
//        case WINTER:
//            printf("冬天\n");
//            break;
//        default:
//            printf("输入错误\n");
//            break;
//    }
//    
//    return 0;
//}
