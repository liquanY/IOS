//#include <stdio.h>
//
//int main()
//{
//    int day;
//    printf("请输入一个1~7之间的整数:");
//    scanf("%d", &day);
//    
//    if (day == 1) {
//        printf("星期一\n");
//    } else if (day == 2) {
//        printf("星期二\n");
//    } else if (day == 3) {
//        printf("星期三\n");
//    } else if (day == 4) {
//        printf("星期四\n");
//    } else if (day == 5) {
//        printf("星期五\n");
//    } else if (day == 6) {
//        printf("星期六\n");
//    } else if (day == 7) {
//        printf("星期日\n");
//    } else {
//        printf("输入错误\n");
//    }
//    
//    switch (day) {//括号中的表达式的值必须是整数 不允许是float double
//        case 1://case后面必须是常量 且case与常量之间要有一个空格
//            printf("星期一\n");//case后面的常量不能重复 但无顺序要求
//            break;//此语句的作用是终止switch的运行
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期日\n");
//            break;
//        default://当所有的case后面的常量都与switch后面的表达式不相同时 执行default后面的语句 default可有可无
//            printf("输入错误\n");
//            break;
//    }
//    
//    return 0;
//}
