#define _CRT_SECURE_NO_WARNINGS 1
/*���ǿ�����2 * 1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
������n��2 * 1��С�������ص��ظ���һ��2 * n�Ĵ���Σ��ܹ��ж����ַ�����*/
class Solution {
public:
	int rectCover(int number) {
		if (number <= 0)
			return 0;
		if (number == 1)
			return 1;
		if (number == 2)
			return 2;
		else
		{
			/*int first = 1;
			int second = 2;
			int third;
			for(int i = 3;i <= number; ++i)
			{
			third = first + second;
			first = second;
			second = third;
			}
			return third;*/
			return rectCover(number - 1) + rectCover(number - 2);
		}
	}
};