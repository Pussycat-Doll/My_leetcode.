//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin>>n;
//    vector<int> arr;
//    while(n--)
//    {
//        int x;
//        cin>>x;
//        arr.push_back(x);
//    }
//    
//    int r = 0;
//    int flag = 0;
//    int i = 1;
//    while(i < arr.size())
//    {
//        while(i < arr.size() && arr[i - 1] == arr[i])
//        {
//            ++i;
//        }
//        while(i < arr.size() && arr[i-1] < arr[i])
//        {
//            ++i;
//            flag = 1;
//        }
//        if(flag == 1)
//        {
//            ++i;
//            ++r;
//            flag = 0;
//        }
//        while(i < arr.size() && arr[i-1] > arr[i])
//        {
//            ++i;
//            flag = 1;
//        }
//        if(flag == 1)
//        {
//            ++i;
//            ++r;
//            flag = 0;
//        }
//    }
//    cout<<r<<endl;
//    return 0;
//}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> arr;
        arr.resize(n+1);
        for(int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        arr[n]=0;
        int i = 0;
        int count = 0;
        while(i < n)
        {
            if(arr[i] > arr[i+1])//����ǵݼ����� 
            {
                while(i < n && arr[i] >= arr[i+1])
                {
                    i++;
                }
                count++;
                i++;
            }
            else if(arr[i] == arr[i + 1])//������ȵ�Ԫ�� 
                i++;
            else//����ǵ������� 
            {
                while(i < n && arr[i] <= arr[i+1])
                {
                    i++;
                }
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
        
    return 0;
}
