#include <iostream>
#include<string>
using namespace std;

class Student{
public:
 Student();
 Student(string name, string surname, int a1,int a2,int test,
 int exam);
 string getName();
 string getSurname();
 int getAssignment1Mark();
 int getAssignment2Mark();
 int getLabTestMark();
 int getExamMark();
 void setAssignment1Mark(int);
 void setAssignment2Mark(int);
 void setLabTestMark(int);
 void setExamMark(int);
 bool passed();
 char getGrade();
private:
 string name;
 string surname;
 int assignment1Mark;
 int assignment2Mark;
 int labTestMark;
 int examMark;
};

Student::Student()
{
    name="";
    surname="";
    assignment1Mark=0;
    assignment2Mark=0;
    labTestMark=0;
    examMark=0;
}
Student::Student(string n,string s,int a1,int a2,int test,int exam)
{

    name=n;
    surname=s;
    assignment1Mark=a1;
    assignment2Mark=a2;
    labTestMark=test;
    examMark=exam;
}
string Student::getName()
{
    cout<<"Enter student Name: ";
    cin>>name;
    return name;
}
string Student::getSurname()
{
    cout<<"Enter student surname: ";
    cin>>surname;
    return surname;
}
int Student::getAssignment1Mark()
{
    cout<<"Enter assignment 1 mark 0...20: ";
    cin>>assignment1Mark;
    return assignment1Mark;
}
int Student::getAssignment2Mark()
{
    cout<<"Enter assignment 2 mark 0...20: ";
    cin>>assignment2Mark;
    return assignment2Mark;
}
int Student::getLabTestMark()
{
    cout<<"Enter lab test mark 0...18: ";
    cin>>labTestMark;
    return labTestMark;
}
int Student::getExamMark()
{
    cout<<"Enter exam mark 0...50: ";
    cin>>examMark;
    return examMark;
}
void Student::setAssignment1Mark(int a1){

assignment1Mark=a1;

}
void Student::setExamMark(int exam){

examMark=exam;

}
void Student::setAssignment2Mark(int a2){

assignment2Mark=a2;

}
void Student::setLabTestMark(int test){

labTestMark=test;

}

bool Student::passed(){

if (((assignment1Mark+assignment2Mark)>=20)&&((labTestMark+examMark)>=30))
    return true;
else
    return false;
}

char Student::getGrade()
{
    int total=assignment1Mark+assignment2Mark+labTestMark+examMark;
    if(total<50)
        return 'F';
    else if ((total>=50)&&(total<60)&&passed())
        return 'P';
    else if ((total>=60)&&(total<70)&&passed())
        return 'C';
    else if ((total>=70)&&(total<80)&&passed())
        return 'B';
    else if (total>=80)
        return 'A';
    else
        cout<<"Wrong Mark!";

}


int main()
{
    Student stud1("Jiff","Mardin",12,17,8,40),stud2;
    cout<<"Student1 grade= " <<stud1.getGrade()<<endl;

    stud2.getName();
    stud2.getSurname();
    stud2.getAssignment1Mark();
    stud2.getAssignment2Mark();
    stud2.getLabTestMark();
    stud2.getExamMark();
    cout<<endl;
    cout<<"Student2 grade= ";
    cout<<stud2.getGrade()<<endl;
    return 0;
}
