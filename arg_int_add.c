/* arg_int_add.c -- 带参数整型加法运算
 *
 * 检测是否带参数
 * 检测参数是否满足可供计算的最小参数数量（2）
 * 检测参数是否为整型数字（int）
 * 进行加运算
 * 返回运算结果
 */

#include <stdio.h>

/* 创建带参数主函数 */
int main(int argc, char** argv)
{
    /* 创建变量 */
    int n;
    int number = 0;
    int sum = 0;

    if (argc < 3)       // 检测是否带有参数(2个以上),argc[1] = 程序所在路径的字符串
    {
        printf("请带参数至少两个以上!\n");
        return 0;
    }

    for(n = 1;n < argc;n++)
    {
        if((number = atoi(argv[n])) == 0)     // atoi(argv[n]) == 0 代码表示无法将字符转换为整型
            {
                printf("类型转换错误\n");
                return 0;
            }
            else
            {
                printf("step[%d] = %d\n",n,sum += number);
            }
    }
    return sum;
}
