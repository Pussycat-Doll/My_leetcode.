class Solution {
public:
    /*
    ��n>=5��ʱ�򣬶���N����3*��N-3��>= N && 2*(N-2) >= N,����
    3*��N-3��>= 2*(N-2)����������Ӧ�þ����ܶ�ؼ�����Ϊ3������;
    ��n==4��ʱ��2*2 > 1*3,����Ӧ��ѡ�������Ϊ2������
    */
    int cutRope(int number) 
    {
        if(number < 2)
            return 0;
        if(number == 2)
            return 1;
        if(number == 3)
            return 2;
        int timesOf3 = number/3;
        if(number%timesOf3 == 1 )
            --timesOf3;
        int timesOf2 = (number - 3*timesOf3)/2;
        return pow(3,timesOf3)*pow(2,timesOf2);
    }
};
