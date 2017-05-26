//#include <stdio.h>
//
//void get(char *str)
//{
//    str = "Hello World!";
//}
//
//void get1(char **str)
//{
//    *str = "Hello World!";
//}
//
//int main()
//{
//    int x = 10;
//    int *px = &x;
//    printf("%d\n", *px);
//    int **ppx = &px;
//    printf("%p\n%p\n", *ppx, &x);
//    printf("%d\n", **ppx);
//    int ***pppx = &ppx;
//    int ****ppppx = &pppx;
//    printf("%p\n%p\n", ***ppppx, &x);
//    
//    char *str = NULL;
//    get(str);
//    printf("str=>%s\n", str);
//    get1(&str);
//    printf("str=>%s\n", str);
//    
//    return 0;
//}
