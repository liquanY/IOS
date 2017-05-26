//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int *p = (int*)malloc(sizeof(int) * 5);
//    p[4] = 10;
//    ;//其他对该数组的操作
//    
//    p = (int*)realloc(p, sizeof(int) * 10);//将已有空间扩大
//    printf("%d\n", p[4]);
//    p[9] = 100;
//    free(p);
//    
//    //重新分配申请的空间
//    int *p1 = (int*)malloc(sizeof(int) * 3);
//    for (int i = 0; i < 3; i++) {
//        p1[i] = i + 1;
//    }
//    for (int i = 0; i < 3; i++) {
//        printf("%d ", p1[i]);
//    }
//    printf("\n");
//    
//    p1 = (int*)realloc(p1, sizeof(int) * 5);
//    p1[3] = 4;
//    p1[4] = 5;
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", p1[i]);
//    }
//    printf("\n");
//    
//    return 0;
//}
