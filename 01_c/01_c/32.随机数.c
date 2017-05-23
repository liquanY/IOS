//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//    //srand和rand()配合使用产生伪随机数序列。rand函数在产生随机数前，需要系统提供的生成伪随机数序列的种子，rand根据这个种子的值产生一系列随机数。如果系统提供的种子没有变化，每次调用rand函数生成的伪随机数序列都是一样的。srand(unsigned seed)通过参数seed改变系统提供的种子值，从而可以使得每次调用rand函数生成的伪随机数序列不同，从而实现真正意义上的“随机”。通常可以利用系统时间来改变系统的种子值，即srand(time(0))，可以为rand函数提供不同的种子值，进而产生不同的随机数序列。
//    srand((unsigned)time(0));
//    
//    int num;
//    for (int i = 0; i < 10; i++) {
//        num = rand() % 100;
//        printf("%d ", num);
//    }
//    printf("\n");
//    
//    return 0;
//}
