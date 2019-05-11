#include <stdio.h>
#define DAYS 31
#define MONTH 12
#define YEAR 4

int main(void)
{
    const int days[DAYS] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    const int month[MONTH] = {1,2,3,4,5,6,7,8,9,10,11,12};
    const int year[YEAR];

    int n;

    for (n = 0; n <= (sizeof(days)/sizeof(days[0])); n++)
    {
        printf("%4d\n",days[n]);
    }
    return 0;
}

