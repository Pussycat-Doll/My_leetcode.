#define _CRT_SECURE_NO_WARNINGS 1
/*���ӣ�https://www.nowcoder.com/questionTerminal/1183548cd48446b38da501e58d5944eb
��Դ��ţ����
����С����һ��W*H��������ӣ�������б��Ϊ0~H-1��������б��Ϊ0~W-1��ÿ������������Է�һ�鵰�⣬�������鵰���ŷ����þ��벻�ܵ���2��
����������������(x1,y1),(x2,y2)��ŷ����þ���Ϊ:
( (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2) ) ������ƽ����
С����֪�������ԷŶ��ٿ鵰������������

��������:
ÿ������������񳤿�W,H���ÿո�ָ�.(1 �� W��H �� 1000)
�������:
���һ�������Էŵĵ�����*/
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
	int w, h;
	cin >> w >> h;
	int count = 0;
	vector<vector<int>> arr;
	arr.resize(w);//��������
	for (auto& e : arr)//�м�Ҫ������
	{
		e.resize(h, 1);//��������������ÿһ��λ����Ϊ1
	}
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			if (arr[i][j] == 1)
			{
				count++;
				if (i + 2 < w)
					arr[i + 2][j] = 0;
				if (j + 2 < h)
					arr[i][j + 2] = 0;
			}
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}
