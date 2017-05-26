//#include <stdio.h>
//
//#define DEBUG0 0
//#define IA64
//#define IA32
//#define LLVM3
//
//int main()
//{
//    int sum = 0;
//    for (int i = 0; i <= 100; i++) {
//        sum += i;
//#if DEBUG0
//        printf("i=%d, sum=%d\n", i, sum);
//#endif
//    }
//    printf("sum=%d\n", sum);
//    
//#ifdef IA64
//    printf("系统是64位的%d\n", __LINE__);
//#else
//    printf("系统时32位的%d\n", __LINE__);
//#endif
//    
//#ifndef IA32
//    printf("系统是64位的%d\n", __LINE__);
//#else
//    printf("系统时32位的%d\n", __LINE__);
//#endif
//    
//#if defined LLVM4
//    printf("LLVM 4.0\n");
//#elif defined LLVM3
//    printf("LLVM 3.0\n");
//#elif defined LLVM2
//    printf("LLVM 2.0\n");
//#endif
//    
//#undef IA32//终止一个宏定义的作用域
//#ifndef IA32
//    printf("没有定义宏IA32\n");
//#endif
//    
//    return 0;
//}
