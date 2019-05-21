/* rand.c -- 产生随机数
   需要用到的库:
   time.h
   stdio.h
   stdlib.h

   time.h  用时钟产生随机数种子
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11		// 定义随机数范围(必须为单数，10以内为11，100以内101，1000以内1001...)

int main(void)
{
	int rand_number;

	srand(time(NULL));			// 用time生成随机数种子
	rand_number = rand() % SIZE;		// 创建一定范围内的随机数并赋值给整型变量rand_number

	printf("%d\n",rand_number);			// 输出随机数值

	return rand_number;
}
