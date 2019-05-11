// add.c -- 命令行带参数运行加法计算并返回结果

#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

int main(void)
{
    float x, y, z;

    for (printf("请输入两个数以进行加法运算: ");;)
    {
        scanf("%g%g",&x,&y);
        z = add(x,y);
        printf("%g+%g=%g\n请输入两个数已进行加法运算: ",x,y,z);
    }


    return 0;
}

