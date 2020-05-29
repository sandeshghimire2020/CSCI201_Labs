#include <iostream>

using namespace std;
void Display(int);
//creating structure
struct Store
    {
        string Name;
        int Mnumber;
        int Price;
    };

struct Store S[10];

//Main function

int main()
{
    int check=0;
    int Index=-1;
    //starting the loop
    do{
        Index=Index+1;
        //input product name by user
        cout<<"Enter product Name: ";
        cin>>S[Index].Name;
        //checking if user wants to quit or not.
        if (S[Index].Name=="quit"){
            check=1;
        }
        else
        {

        cout<<"Enter product Number: ";
        cin>>S[Index].Mnumber;
        cout<<"Enter product Price: ";
        cin>>S[Index].Price;
        }

    //while condition
    }while(check!=1 && Index<=9);

    Display(Index-1);

    return 0;
}
//function to display
void Display(int i){

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"Name \t\t"<<"No.\t\t"<<"Price\t\t"<<endl;

    for(int j=0;j<=i;j++){

        cout<<S[j].Name<<"\t\t"<<S[j].Mnumber<<"\t\t"<<S[j].Price<<endl;

    }
}
