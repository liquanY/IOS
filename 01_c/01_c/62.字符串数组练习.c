//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    //字符串数组练习
//    char *str = "This is a string";
//    printf("%s\n", str);
//    printf("%c\n", *str);
//    
//    char* strs[5] = {"aaa", "bbb", "ccc", "ddd", "eee"};
//    for (int i = 0; i < 5; i++) {
//        printf("%s\n", *(strs + i));
//    }
//    printf("%lu\n", sizeof(strs[0]));
//    strs[0] = "AAA";//修改strs[0]的指向
//    
//    char strBuf[100] = "This is a string.";
//    strBuf[0] = 't';
//    char strBufs[5][100] = {"aaa", "bbb", "ccc", "ddd", "eee"};
//    for (int i = 0; i < 5; i++) {
//        printf("%s\n", strBufs[i]);
//    }
//    strBufs[0][0] = 'A';
//    for (int i = 0; i < 5; i++) {
//        printf("%s\n", strBufs[i]);
//    }
//    
//    //从键盘输入3个人的名字 保存到一个数组中
//    char name[3][20];
//    for (int i = 0; i < 3; i++) {
//        printf("请输入第%d个人的名字:", i + 1);
//        scanf("%s", name[i]);
//    }
//    printf("这三个人的名字是:\n");
//    for (int i = 0; i < 3; i++) {
//        printf("%s\n", name[i]);
//    }
//    
//    //输入一个姓名 判断是否是五虎上将
//    char selfName[20];
//    printf("请输入一个名字:");
//    scanf("%s", selfName);
//    char* tiger[5] = {"GuanYu", "ZhangFei", "ZhaoYun", "MaChao", "HuangZhong"};
//    int i = 0;
//    for (; i < 5; i++) {
//        if (strcmp(selfName, tiger[i]) == 0) {
//            printf("%s是五虎上将之一\n", selfName);
//            break;
//        }
//    }
//    if (i == 5) {
//        printf("%s不是五虎上将之一\n", selfName);
//    }
//    
//    return 0;
//}
