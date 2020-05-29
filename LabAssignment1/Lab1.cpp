// Sandesh Ghimire
//CSCI 201: lab assignment 1


#include <iostream>

using namespace std;
const double PI= 3.12159265;
int main()
{
    double radius, volume;
    cout<< "Enter the redius of a sphere: ";
    cin>> radius;
    volume= 4.0/3.0*PI*radius*radius*radius;
    cout<<"The volume of sphere is: "<< volume << endl;

    return 0;

}
