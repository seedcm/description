/* 数据类型说明
 *
 * 基本类型：它们是算数类型，包括两种类型（可以使用 sizeof(type) 运算符获取准确大小）
 *      1：整数类型
 *          char            存储大小（1 字节）  值范围（-128 to 127 / 0 to 255)
 *          unsigned char   储存大小（1字节）   值范围（0 to 255)
 *          signed char     储存大小（1字节）   值范围（-128 to 127)
 *          int             储存大小（2/4字节） 值范围（-32768 to 32767 / -2147483648 to 2147483647）
 *          unsigned int    储存大小（2/4字节） 值范围（0 to 65535 / 0 to 4294967295）
 *          short           储存大小（2字节）   值范围（-32768 to 32767）
 *          unsigned short  储存大小（2字节）   值范围（0 to 65535）
 *          long            储存大小（4字节）   值范围（-2147483648 to 2147483647）
 *          unsigned long   储存大小（4字节）   值范围（0 to 4294967295）
 *      2：浮点型
 *          float           储存大小（4字节）   值范围（1.2E-38 to 3.4E+38）    精度（6位小数）
 *          double          储存大小（8字节）   值范围（2.3E-308 to 1.7E+308）  精度（15位小数）
 *          long double     储存大小（16字节）  值范围（3.4E-4932 to 1.1E+4932）精度（19位小数）
 * 
 * 枚举类型：它们也算是算数类型，被用来定义在程序中只能赋予其一定的离散整数值的变量
 *
 * void 类型：类型说明符 void 表明没有可用的值
 *      1：函数返回为空
 *          C 中有各种函数都不返回值i,huoz可以说它们返回空。不返回值的函数的返回类型为空。
 *          例：void exit (int status);
 *      2：函数参数为空
 *          C 中有各种函数不接受任何参数，不带参数的函数可以接受一个void。
 *          例：int rand(void);
 *      3：指针指向 void
 *          类型为 void *的指针代表对象的地址，而不是类型。
 *          例：内存分配函数 void *malloc(size_t_size);返回指向void的指针，可以转换为任何数据类型。
 *
 * 派生类型：它们包括 指针类型、数据类型、结构类型、共用体类型和函数类型
 */
