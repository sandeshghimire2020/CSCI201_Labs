#include <iostream>

using namespace std;

int main()
{
    int Number[10];
    int Temp;

    cout<<"enter 10 numbers: ";
    for (int i=0;i<10;i++)
    {

        cin>>Number[i];

    }
    cout<<"Your Array has these values: "<<endl;
    int STemp=Number[0];
    int LTemp=Number[0];
    int Sum= Number[0];
    cout<<Number[0]<<" ";
    for (int i=1;i<10;i++)
    {

        cout<<Number[i]<<" ";
        if (STemp>Number[i]){
            STemp=Number[i];
            }
        if (LTemp<Number[i]){
            LTemp=Number[i];
        }
        Sum=Sum+Number[i];
    }


    cout<<endl;

    cout<<"Smallest: "<<STemp<<endl;
    cout<<"Largest: "<<LTemp<<endl;
    cout<<"Sum: "<<Sum<<endl;
    cout<<"Average: "<<Sum/10.0<<endl;
    return 0;
}
