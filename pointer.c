/* pointer.c -- 指针
 *
 * 关于指针的相关描述和用法
 * 
 * 取地址运算符：&
 *      &的作用是提取当前变量的地址
 *
 * 地址运算符：*
 *      *的作用是1.将变量定义为指针型变量。2.输出时，提取指针变量当前存储的地址中的值
 *
 * 注意：
 *      如果需要将地址直接赋值给指针变量，必须进行强制转换。例：
 *      
 *      int *pointer;
 *      pointer = (int *)0x12ff7c;
 *      
 *      但还请注意：
 *          需要赋值给指针变量的地址，必须是不能被系统或其他程序使用的地址，否则会出现（Segmentation fault）错误。
 *
 * 例：
 */
#include <stdio.h>
int main(void)
{
    int number;         // 定义整型变量
    int *pointer;       // 定义指针变量
    int value;          // 定义整型变量
    int *pointer_local; // 定义指针变量（用于测试，直接将地址赋值给指针变量）

    number = 10;                        // 将数值10赋值给整型变量number
    pointer = &number;                  // 将整型变量number的地址赋值给指针变量p
    value = *pointer;                   // 将指针变量pointer中储存的number地址中的值10赋值给整型变量value
    pointer_local = (int *)0x12ff7c;    // 直接将地址赋值给指针变量，必须使用(int *)进行强制转换地址
    
    printf("number的地址是 %p\n",&number);                  // 打印number的地址,打印地址须使用 %p 
    printf("number的值是 %d\n",number);                     // 打印整型变量number中储存的值
    printf("pointer的地址是 %p\n",&pointer);                // 打印整型指针变量pointer储存的地址(其实potiner中存储的就是number的地址)
    printf("pointer地址中存储的值是 %d\n",*pointer);        // 打印整型指针变量pointer春促的地址中的值(其实就是number的值)
    printf("value的值是 %d\n",value);                       // 打印将整型指针变量中存储的number的地址中存储的值赋值给整型变量value
    printf("pointer_local的地址为 %p\n",&pointer_local);    // 打印直接赋值给指针变量的地址
    printf("pointer_local地址中的值是 %d\n",*pointer_local);// 打印直接赋值给指针变量的地址中储存的值,如果该地址被占用,则提示错误

    return 0;
}

