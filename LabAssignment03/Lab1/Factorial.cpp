#include <iostream>

using namespace std;

int main()
{
    int Num,Pro;
    cout << "Enter a number: ";
    cin>> Num;
    Pro=1;
    for(int Index=1 ; Index<=Num;Index++){
        Pro=Pro*Index;
    }
    cout<<"The factorial of "<<Num<<" is: "<<Pro;


    return 0;
}
