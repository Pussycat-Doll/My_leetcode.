/*请实现字符串右循环移位函数，比如：“abcdefghi”循环右移2位就是“hiabcdefg”.
函数原型：void RightLoopMove(char *pStr, unsigned short steps)
   函数参数说明：
   pStr: Point to a ‘\0’ terminated string
   steps: The rotate shift numbers
*/
#include<stdio.h>
#include<assert.h>
#include<string.h>
void reverse(char* start, char* end)
{
	assert(start != NULL && end != NULL);
	char tmp;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void RightLoopMove(char* pStr, unsigned short steps)
{
	int len = strlen(pStr);
	reverse(pStr, pStr + len - steps - 1);
	reverse(pStr + len - steps, pStr + len - 1);
	reverse(pStr, pStr + len - 1);
}
void main()
{
	char str[] = "abcdefghi";
	RightLoopMove(str, 2);
	printf("%s\n", str);
}