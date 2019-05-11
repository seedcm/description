// 地址指针

#include <stdio.h>

int main(void)
{
    int array[4] = {1,2,3,4};
    int n;

    for (n = 0; n <= sizeof(array)/sizeof(array[0]); n++)
    {
        array[n] = n+10;
    }
    for (n = 0; n <= sizeof(array)/sizeof(array[0]); n++)
    {
        printf("array[%d] = %d\tthe addr is %p\n",n,array[n],&array[n]);
    }
    return 0;
}

