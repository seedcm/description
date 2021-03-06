/* getchar.c -- 供预处理器使用的宏
 *
 * getchar()用于读取用户从键盘输入的单个字符。
 * 
 * 它有一个整型的返回值：
 * 当发生读取错误时，返回整型值 -1
 * 当读取正确时，它会返回用户从键盘输如的第一个字符的ASCII码
 *
 * 当程序调用getchar()时，程序就等着用户从按键输入
 * 用户输入的字符被存放在键盘缓冲区中。直到用户按下回车为止(回车字符也放在缓冲区中)。
 * 当用户键入回车后，getchar()才开始从输入流中每次读入一个字符
 * 输入的字符不止一个的时候，后续的getchar()调用不会等待用户按键
 * 而直接读取缓冲区中的字符，知道缓冲区中的字符读取完毕，才等待用户按键。
 *
 * getchar()函数输入数字也按字符处理
 * 单个的getchar()函数输入多余一个字符时，只接受第一个字符
 */

#include <stdio.h>
int main(void)
{
    char ch;
    while ((ch = getchar()) != '#')
        putchar(ch);
    return 0;
}

