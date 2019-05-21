/* sizeof.c -- 计算数组实际值的个数
 *
 * sizeof 运算符给出它的运算对象的大小（以字节为单位）
 * sizeof(array_name) 是整个数组的大小（以字节为单位。
 * sizeof(array_name[index]) 是数组中一个元素的大小（以字节为单位）。
 * 整个数组的大小除以单个元素的大小就是数组元素的个数。
 */

#include <stdio.h>
#define SIZE 12

int main(void)
{
    const int month[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12};   // 创建数组
    int n;

    for (n = 0; n < sizeof(month) / sizeof(month[0]); n ++)  // 计算数组元素的个数
    {
        printf("元素的个数为%2d个.其中第%2d个是%2d.\n",sizeof(month)/sizeof(month[0]),n,month[n]);
    }
    return 0;
}

