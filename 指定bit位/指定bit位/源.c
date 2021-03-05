#include<stdio.h>
#include<stdbool.h>
/*�����ʵ�����¹��ܵĺ���
���ܣ�ʵ�ֶ�һ��8 bit���ݣ�unsigned char���ͣ���ָ��λ�������nλ������0������1����������������λ���䡣
����ԭ�ͣ�
 void bit_set(unsigned char *p_data, unsigned char position, bool flag)
 ��������˵����
 P_data ��ָ����Դ���ݣ�position��ָ��λ��ȡֵ��Χ1~8����flag��ʾ����0������1������true: ��1  false:��0
*/

/*p_data->Դ���ݣ�position->ָ��λ��flag->trueΪ��1������false��0����*/
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