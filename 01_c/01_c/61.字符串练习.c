//#include <stdio.h>
//#include <string.h>//所有字符串库函数必须加头函数
//
//int main()
//{
//    //输入输出个人信息
//    char name[100];
//    int age;
//    char school[200];
//    
//    printf("请输入姓名:");
//    scanf("%s", name);
//    printf("请输入年龄:");
//    scanf("%d", &age);
//    printf("请输入毕业院校:");
//    scanf("%s", school);
//    
//    printf("学生个人信息如下:\n");
//    printf("姓名:%s\n", name);
//    printf("年龄:%d\n", age);
//    printf("毕业院校:%s\n", school);
//    
//    //字符串库函数
//    char str[10] = {};
//    strcpy(str, "string");//字符串赋值
//    printf("%s\n", str);
//    strncpy(str, "hello", 4);//字符串赋值
//    printf("%s\n", str);
//    
//    unsigned long len = strlen(str);//求字符串中字符的个数 即字符串长度
//    printf("%lu\n", len);
//    printf("%lu\n", sizeof(str));
//    
//    char str1[20];
//    strcpy(str1, "abcde");
//    strcat(str1, "fg");//字符串拼接
//    printf("%s\n", str1);
//    strncat(str1, "hijk", 2);//字符串拼接
//    printf("%s\n", str1);
//    
//    char str2[] = "abcd";
//    char str3[] = "abcdef";
//    if (strcmp(str2, str3) > 0) {//比较两个字符串
//        printf("str2 > str3\n");
//    } else if (strcmp(str2, str3) < 0) {
//        printf("str2 < str3\n");
//    } else {
//        printf("str2 == str3\n");
//    }
//    
//    char password[100] = {};
//    printf("请输入一个密码:");
//    scanf("%s", password);
//    if (strcmp(password, "abc123") == 0) {
//        printf("密码正确\n");
//    } else {
//        printf("密码错误\n");
//    }
//    
//    return 0;
//}
