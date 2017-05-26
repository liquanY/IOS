//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//
//struct Person
//{
//    char name[20];
//    bool gender;
//    int age;
//};
//
//struct Person set(char *name, bool gender, int age)
//{
//    struct Person per;
//    strcpy(per.name, name);
//    per.gender = gender;
//    per.age = age;
//    return per;
//}
//
//void set1(struct Person *p, char *name, bool gender, int age)
//{
//    strcpy(p->name, name);
//    p->gender = gender;
//    p->age = age;
//}
//
//void print(struct Person p)
//{
//    printf("%s, %s, %d\n", p.name, p.gender ? "男" : "女", p.age);
//}
//
//void print1(struct Person *p)
//{
//    printf("%s, %s, %d\n", p->name, p->gender ? "男" : "女", p->age);
//}
//
//int main()
//{
//    struct Person per;
//    strcpy(per.name, "Zhangsan");
//    per.gender = true;
//    per.age = 18;
//    printf("%s, %s, %d\n", per.name, per.gender ? "男" : "女", per.age);
//    
//    struct Person per1;
//    set1(&per1, "李四", true, 20);
//    print(per1);
//    print1(&per1);
//    
//    struct Person stu[5];
//    strcpy(stu[0].name, "王五");
//    stu[0].gender = true;
//    stu[0].age = 23;
//    
//    struct Person per2 = {"赵六", true, 22};//结构体变量的初始化
//    print1(&per2);
//    struct Person employee[5] = {{"zhangsan", true, 30}, {"lisi", true, 28}, {"wangwu", true, 26}};
//    for (int i = 0; i < 5; i++) {
//        print1(&employee[i]);
//    }
//    
//    return 0;
//}
