// 多维数组

#include <stdio.h>

int main(void)
{
    int array[2][4] = {{1,2,3,4},{5,6,7,8}};
    int x, y;

    for (x = 0; x <= 1; x++)
    {
        for (y = 0; y <= 3; y++)
        {
            printf("array[%d][%d] = %d",x,y,array[x][y]);
            printf(" the addr is %p\n",&array[x][y]);
        }
    }
    return 0;
}

