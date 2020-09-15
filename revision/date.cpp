#include<iostream>
using namespace std;

bool isleap(int y)
{
    if(y%100!=0 && y%4==0 || y%400==0)
        return true;
    return false;
}


int main()
{
    int date,month,year;
    cin>>date>>month>>year;

    if(date==30 && (month==4 || month==6 || month == 9 || month==11))
    {
        date = 1;
        month++;
    }

    else if(date==31 && (month==1 || month==3 || month == 5 || month==7 || month==8 || month==10 || month==12))
    {
        if(month==12)
           {
               month = 1;
               year++;
           }
        else
        month++;
        date = 1;

    }
    else if(isleap(year) && date==29)
    {

            date = 1;
            month++;

    }
    else if(!isleap(year) && date==28)
    {
        date = 1;
        month++;
    }
    else
    {
        date++;
    }

    cout<<date<<"/"<<month<<"/"<<year<<endl;
}
