// 带参数加法运算
// 检测是否带参数
// 检测参数是否满足可供计算的最小参数数量（2）
// 检测参数是否为数字（int、float）
// 返回运算结果

#include <stdio.h>

/* 创建带参数主函数 */
int main(int argc, char** argv)
{
    /* 创建变量 */
    int int_num;        // 整型变量
    int int_sum;        // 整型数值合计
    int float_num;      // 浮点型变量
    int float_sum;      // 浮点型数值合计
    int double_num;     // 
    int double_sum;

    if (argc <= 2)
    {
        printf("至少两个以上参数!\n");
        return 0;
    }
    else
    {
        for (n = 2; n <= (argc-1); n++)
        {
            if (sum += atoi(argv[n]) != 1)
            {
                printf("转换失败\n");
                return 0;
            }
            else
            {
                printf("sum = %d\n",sum += atoi(argv[n]));
            }
        }
    }
    return sum;
}
