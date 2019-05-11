/* argc_argv.c -- 程序命令行参数
 * 
 * argc 为int类型，记录程序命令行参数的个数。
 * 当 argc = 1 时，argv[0] = 程序当前路径以及程序名称的字符串
 * 当 argc = 2 时，argv[1] = 用户输入的第一个参数。
 * 当 argc = 3 时，。。。。。。
 *
 * argv 为char类型数组，默认 argv[0] 存储当前程序路径以及程序名称的字符串
 * 当用户带入参数执行程序时，其参数自动存储到 argv[1] 里。
 * 如果用户带入 2 个参数执行程序，其参数自动存储到 argv[2] 里。
 * 如果用户带入 N 个参数执行程序，起参数自动存储到 argv[N] 里。
 * 
 * 如果用户带入的参数为数字，那么需要用函数 atoi 将其转换并赋值给 int 类型的变量。
 *
 * 参数必须以空格为分隔符，其它任何连续字符都将被认为是一个字符串
 *
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, o, x, y, z;

    printf("如需转换 argv 为整型并赋值给x,y,z三个变量，请带三个参数运行该程序!\n");
    printf("argc[%d]\n",argc);

    // 按顺序打印 argv[] 中的所有值
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i+1 , argv[i]);
    }

    // 将argv中的参数用函数(atoi)转换成数字并赋值给变量
    x = atoi(argv[1]);
    y = atoi(argv[2]);
    z = atoi(argv[3]);
    
    printf("\n使用函数(atoi)将argv中的数值转换为数字后的结果\n");
    printf("int x = argv[1] = %d\nint y = argv[2] = %d\nint z = argv[3] = %d\n",x,y,z);
    


    system("pause");
    return 0;
}

