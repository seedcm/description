// goto.c -- 无条件转移

#include<stdio.h>

int main(void)
{
    int num;

pt:     // goto标签
    num++ ;

    printf("num = %d\n",num);
    printf("goto完毕\n");

    getchar();

    goto pt;    // goto到标签处(pt)开始执行程序

    return 0;
}
