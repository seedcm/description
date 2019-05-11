// 带参数加法运算

#include <stdio.h>

int main(int argc, char** argv)
{
    int num, sum, n;

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
