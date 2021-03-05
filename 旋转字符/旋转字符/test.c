/*��ʵ���ַ�����ѭ����λ���������磺��abcdefghi��ѭ������2λ���ǡ�hiabcdefg��.
����ԭ�ͣ�void RightLoopMove(char *pStr, unsigned short steps)
   ��������˵����
   pStr: Point to a ��\0�� terminated string
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