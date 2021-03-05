#include<stdio.h>
#include<stdbool.h>
/*请编码实现以下功能的函数
功能：实现对一个8 bit数据（unsigned char类型）的指定位（例如第n位）的置0或者置1操作，并保持其他位不变。
函数原型：
 void bit_set(unsigned char *p_data, unsigned char position, bool flag)
 函数参数说明：
 P_data 是指定的源数据，position是指定位（取值范围1~8）；flag表示是置0还是置1操作，true: 置1  false:置0
*/

/*p_data->源数据，position->指定位，flag->true为置1操作，false置0操作*/
void bit_set(unsigned char* p_data, unsigned char position, bool flag)
{
	int ant = 1;
	ant <<= (position - 1);
	if (!flag)
	{
		ant = ~ant;
		*p_data &= ant;
	}
	else
		*p_data |= ant;
}
int main()
{
	unsigned char s = 123;
	unsigned char* str = &s;
	bit_set(str, 2, false);
	bit_set(str, 3, true);
	
	return 0;
}