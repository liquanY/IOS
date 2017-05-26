//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
//    clock_t t = clock();//可以得到从启动这个程序到此句话为止 cpu所用的毫秒数
//    printf("%lu\n", t);
//    
//    clock_t begin;
//    begin = clock();
//    for (long i = 0; i < 10000000000; i++) {
//        ;
//    }
//    clock_t end = clock();
//    printf("%lu\n", (end - begin) / CLOCKS_PER_SEC);
//    
//    time_t t1;
//    time(&t1);//t1中将得到当前本地日历时间
//    printf("%s\n", ctime(&t1));
//    for (long i = 0; i < 10000000000; i++) {
//        ;
//    }
//    time_t t2;
//    time(&t2);
//    printf("%f\n", difftime(t2, t1));
//    
//    struct tm *gm = gmtime(&t1);//标准时
//    printf("%s\n", asctime(gm));
//    
//    struct tm *lm = localtime(&t1);//当地时间
//    printf("%s\n", asctime(lm));
//    
//    char buffer[100];
//    strftime(buffer, 100, "%Y年%m月%d日 %H:%M:%S", lm);
//    printf("%s\n",buffer);
//    
//    return 0;
//}
