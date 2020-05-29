#include <iostream>

using namespace std;

int main()
{
    int Sunit;


    cout << "Enter the number of units sold: ";
    cin>>Sunit;

    if ((Sunit>=10) && (Sunit<=19))
        cout<<" The total price is "<< ((Sunit*99)*20/100)+(Sunit*99)<<endl;

    else if((Sunit>=20) && (Sunit<=49))
            cout<<" The total price is "<< ((Sunit*99)*30/100)+(Sunit*99)<<endl;

    else if ((Sunit>=50) && (Sunit<=99))
        cout<<" The total price is "<< ((Sunit*99)*40/100)+(Sunit*99)<<endl;

    else if (Sunit>100)
        cout<<" The total price is "<< ((Sunit*99)*50/100)+(Sunit*99)<<endl;

    else if (Sunit<0)
        cout<<"ERROR: The unit should be greater then 0: ";
    else
        cout<<" The total price is"<< ((Sunit*99)*0/100)+(Sunit*99)<<endl;



    return 0;
}
