//#include <stdio.h>
//
//int main()
//{
//    //sprintf函数 可以将任意类型的数字转换为字符串
//    int i = 10;
//    char buffer[100];
//    sprintf(buffer, "%d", i);
//    printf("%s\n", buffer);
//    
//    double d = 123.456;
//    sprintf(buffer, "%lf", d);
//    printf("%s\n", buffer);
//    
//    long l = 123456789012345;
//    sprintf(buffer, "%ld", l);
//    printf("%s\n", buffer);
//    
//    //sscanf函数 可以将字符串类型的数字转换成任意类型
//    char str[] = "123.456";
//    sscanf(str, "%lf", &d);
//    printf("%lf\n", d);
//    
//    char str1[] = "100";
//    sscanf(str1, "%d", &i);
//    printf("%d\n", i);
//    
//    return 0;
//}
