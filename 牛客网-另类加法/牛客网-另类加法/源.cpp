#define _CRT_SECURE_NO_WARNINGS 1
/*
˼·��2+3 = 5   0010 + 0011 = 0101

	     A^B   = 0001
		 A&b   = 0010
	  A&B<<1   = 0100
(A^B)^(A&B<<1) = 0101
*/
class UnusualAdd {
public:
	int addAB(int A, int B) {
		int sum;
		int bit;
		while (B != 0)
		{
			sum = A^B;//��������λ�ĺ�
			bit = (A&B) << 1;//����λ
			A = sum;
			B = bit;
		}
		return sum;
	}
};