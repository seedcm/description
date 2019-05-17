/* 解决while中scanf造成的无限循环
 * 下面是个无限循环的例子
 * 
 * #include <stdio.h>
 * int main(void)
 * {
 *     int a, b;
 *     b = 10;
 *     while (1)
 *     {
 *         if (scanf("%d",&a) != 1)
 *         {
 *             printf("格式错误!\n");
 *             continue;
 *         }
 *         else if (a == b)
 *         {
 *             printf("正确\n");
 *             break;
 *         }
 *         else
 *         {
 *             printf("错误\n");
 *             continue;
 *         }
 *     }
 *     
 *     return 0;
 * }
 *
 * 原因说明：
 * 当第一次通过scanf输出数值后，其值包含回车符也被记录到缓冲区中。
 * 导致每次直接读取条件值二不进行再次scanf输入。
 *
 * 解决方法：
 * 清除input缓冲区。
 * 在while开始后的第一次scanf输入结束后，或者整个循坏开始或结束后，通过函数+正则表达式或者函数清除input缓冲区。
 *
 * 1.scanf("%*[^\n]%*c");
 * 2.setbuf(stdin,NULL);
 * 3.fflush(stdin);
 *
 * 下面为正确例子：
 */
#include <stdio.h>
int main(void)
{
    int a;
    while (scanf("%d",&a) != 1)
    {
        printf("类型错误!\n");
        scanf("%*[^\n]%*c");        // 清除input缓冲区数据
        continue;
    }
    printf("%d\n",a);

    return 0;
}

