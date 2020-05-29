#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    float Amount;
    float Rate;
    int Count=1;
    cout<<"Enter the amount $";
    cin>> Amount;
    cout<<"Enter the interest value(in percentage):";
    cin>>Rate;
    cout<<"Year\t\tAmount on deposit"<<endl;
    cout <<setprecision(2)<<fixed;
    while(Count<=10)
    {

        Amount= Amount + Amount*(Rate/100);
        cout<<Count<<"\t\t$"<<Amount<<endl;
        Count=Count+1;

    }

    return 0;
}
