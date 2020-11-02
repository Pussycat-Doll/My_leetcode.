// #include<iostream>
// using namespace std;
// class Date
// {
//     public:
//     friend istream& operator>>(istream& in,Date& d);
//     bool islooneryear()
//     {
//         return ((_year%4==0 && _year%100 !=0) || _year%400==0);
//     }
//     int getmonthday()
//     {
//         switch(_month)
//         {
// //             case 1:
//             case 3:
//             case 5:
//             case 7:
//             case 8:
//             case 10:
//             case 12:
//                 return 31;
//             case 2:
//                 if(islooneryear())
//                     return 29;
//                 else
//                     return 28;
//             default:
//                 break;
//         }
//         return 30;
//     }
//     int days()
//     {
//         int day = _day;
//         --_month;
//         while(_month >= 1)
//         {
//             day+= getmonthday();
//             --_month;
//         }
//         return day;
//     }
//     private:
//     int _year;
//     int _month;
//     int _day;
// };
// istream& operator>>(istream& in,Date& d)
// {
//     in>>d._year>>d._month>>d._day;
//     return in;
// }
// int main()
// {
//     Date d;
//     while(cin>>d)
//     {
//     cout<<d.days()<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    static int monthday[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int year, month, day;
    while (cin >> year >> month >> day)
    {
        int days = 0;
        for (int i = 1; i < month; ++i)
        {
            days += monthday[i];
        }
        if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        {
            ++days;
        }
        days += day;
        cout << days << endl;
    }

    return 0;
}