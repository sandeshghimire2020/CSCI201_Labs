#include <iostream>

using namespace std;
//user-defined function prototypes
//the function getNumber returns an integer value entered by the user giving the number of employ
int getNumber();
//the function getSalary returns a float value entered by the user giving the employee's sa
double getSalary(int);
// the function calcRaise returns the raise calculated for the salary pas
double calcRaise(double);
/* the function totalRaises returns the new total of raises using the current total and current raise being processed */
double totalRaises(double,double);





int main()
{
  int Num;
  double Salary;
  double TotalRaise,Raise;

  Num=getNumber();
  for (int i=1;i<=Num;i++)

    {
        Salary= getSalary(i);
        Raise=calcRaise(Salary);
        cout<<"Employee "<<i<<" receives a raise of $"<<Raise<<endl;
        TotalRaise= totalRaises(Raise,TotalRaise);

    }
    cout<<"The total cost of raises: $"<<TotalRaise;


}
int getNumber()
{
    int Num;
    cout<<"Enter the number of employees: ";
    cin>> Num;
    return Num;
}
double getSalary(int empNumber)
{
    double Salary=0.00;

        cout<<"Enter the salary for employee "<<empNumber<<": ";
        cin>>Salary;
        return Salary;

}
double calcRaise(double salary)
{
    double Raise;

    if (salary <= 25000)
    {
       Raise= 0.05* salary;
    }
    else if (salary>25001 && salary<3500)
    {
        Raise=  0.04* salary;
    }
    else if(salary > 35001)
    {
        Raise=0.03*salary;

    }

    return Raise;
}

double totalRaises(double raise,double total)
{


    return  raise+total;
}
