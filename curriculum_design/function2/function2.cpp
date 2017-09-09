#include <iostream>
#include <windows.h>
#include <cstdlib>
//#define years 2020
//#define month 7
//#define days 24
//#define hours 8
//#define mintues 30
//#define seconds 0
using namespace std;

void CountDown_Seconds(int &Years, int &Month, int &Days,int &Hours,int &Mintues,int &Seconds)
{

    for(; Seconds >= 0; Seconds--)    {

        cout << Years << " " << Month << " " << Days << " " << Hours << " " << Mintues << " " << Seconds << endl;
        Sleep(1000);
//        system("cls");
    }

}

void CountDown_Mintues(int &Years, int &Month, int &Days,int &Hours,int &Mintues,int &Seconds)
{

    for(; Mintues >= 0; Mintues--)
    {
        CountDown_Seconds(Years, Month, Days, Hours, Mintues, Seconds);
        Seconds = 59;
    }

}

void CountDown_Hours(int &Years, int &Month, int &Days,int &Hours,int &Mintues,int &Seconds)
{
    for( ; Hours >= 0 ; Hours--)
    {
        CountDown_Mintues(Years, Month, Days, Hours, Mintues, Seconds);
        Mintues = 59;
    }
}

void CountDown_Days(int &Years, int &Month, int &Days,int &Hours,int &Mintues,int &Seconds)
{
    for( ; Days >= 0 ; Days--)
    {
        CountDown_Hours(Years, Month, Days, Hours, Mintues, Seconds);
        Hours = 23;
    }
}

void CountDown_Month(int &Years, int &Month, int &Days,int &Hours,int &Mintues,int &Seconds)
{
    for( ; Month >= 0 ; Month--)
    {
        CountDown_Days(Years, Month, Days, Hours, Mintues, Seconds);
        Days = 29;
    }
}

void CountDown(int &Years, int &Month, int &Days, int &Hours, int &Mintues, int &Seconds)
{
    for (; Years >= 0 ; Years--)
    {
        CountDown_Month(Years, Month, Days, Hours, Mintues, Seconds);
        Month = 11;
    }
}

int main()
{
    SYSTEMTIME st = {0};
    GetLocalTime(&st);
    int years = 2020-2016;
    int month;
    if (st.wMonth > 7) {
        month = 7 - st.wMonth;
        years++;
    }
    else
        month = st.wMonth - 7;
    int days= 30-st.wDay+24;
    int hours= 24-st.wHour;
    int mintues= 60-st.wMinute;
    int seconds= 60-st.wSecond;
    //cout << int(st.wYear) << st.wMonth << st.wDay << st.wHour << st.wMinute << st.wSecond;
    CountDown(years, month, days, hours, mintues, seconds);
    //system("pause");
    return 0;
}