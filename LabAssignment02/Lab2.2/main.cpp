#include <iostream>

using namespace std;

int main()
{
    int Books;


    cout << "Enter the number of books you brought this months: ";
    cin>>Books;
    switch(Books)
    {
    case 1: cout<<"The total points you got this months is: 5"<<endl;
            break;
    case 2: cout<<"The total points you got this months is: 15"<<endl;
            break;
    case 3: cout<<"The total points you got this months is: 30"<<endl;
            break;
    case 4: cout<<"The total points you got this months is: 60"<<endl;
            break;
    case 0: cout<<"The total points you got this months is: 0"<<endl;
    default : cout<<"ERROR: enter positive number"<<endl;

    }


    return 0;
}
