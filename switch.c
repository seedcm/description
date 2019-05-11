#include <stdio.h>

int main(void)
{
    /* 局部变量 */
    char grade = 'B';

    switch (grade)
    {
        case 'A' :
            printf("great!\n");
            break;
        case 'B' :
            printf("goog!\n");
            break;
        case 'C' :
            printf("emmmm...\n");
            break;
        default :
            printf("输入的内容无效\n");
    }
}


