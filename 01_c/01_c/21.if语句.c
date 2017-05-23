//#include <stdio.h>
//
//int main()
//{
//    int power1 = 1000;
//    int power2 = 800;
//    if (power1 >power2) {
//        printf("开火\n");
//        printf("差点阵亡\n");
//    }
//    
//    double money = 3.0;
//    double price = 2.9;
//    printf("%0.18lf\n", money - price - 0.1);
//    if (money - price - 0.1 == 0) {
//        //浮点型不要直接使用==和!=进行判断
//        printf("OK!\n");
//    }
//    if (money - price - 0.1 < 0.01) {
//        //浮点型是否等于0的问题 可以按照约定判断 double型最高到10^-15为止
//        printf("认为已经等于0了\n");
//    }
//    if (money - price - 0.1 < 1E-15) {
//        printf("1E-15表示10的-15次方\n");
//    }
//    
//    //判断是否成年
//    int age;
//    printf("请输入一个年龄:\n");
//    scanf("%d", &age);
//    if (age < 18) {
//        printf("未成年人\n");
//    }
//    if (age >= 18) {
//        printf("成年人\n");
//    }
//    
//    int power3 = 1000;
//    int power4 = 800;
//    if (power3 < power4) {
//        printf("敌人中弹\n");
//        printf("敌人死亡\n");
//    } else {
//        printf("英雄中弹\n");
//        printf("英雄重伤\n");
//    }
//    
//    int salary;
//    printf("请告诉我,贵公司最多能给我的工资数:");
//    scanf("%d", &salary);
//    if (salary < 6000) {
//        printf("我不能接受\n");
//    } else {
//        printf("很高兴加盟贵公司\n");
//    }
//    
//    return 0;
//}
