#include<iostream>

using namespace std;
void output(int , float );// function protoptype
void output(int , double );// function protoptype
void output(int *, float *);// function protoptype

int main()
{
    int rollno;
    float cgpa;
    cout<<"Enter values:";
    cin>>rollno>>cgpa;
    output(&rollno,&cgpa);// address of variables will be passed
    
    cout<<"\ncall by reference output function call is over:\n";
    cout<<"Roll No:"<<rollno<<endl;
    cout<<"CGPA:"<<cgpa<<endl;

    output(rollno,float(5.0));// address of variables will be passed
    cout<<"\n Call by value output function call is over:\n";
    cout<<"Roll No:"<<rollno<<endl;
    cout<<"CGPA:"<<cgpa<<endl;

    return 0;
}
// function to output the values using references
void output(int *r, float *c)// address will be passed
{
    cout<<"Inside output function with reference \n";
    *r=(*r)+1;
    cout<<"Roll No:"<<*r<<endl;
    *c=(*c)+0.1;
    cout<<"CGPA:"<<*c<<endl;
}


// function to output the values
void output(int r, float c)
{
    cout<<"Inside output function\n";
    cout<<"Roll No:"<<r+1<<endl;
    cout<<"CGPA:"<<c+0.1<<endl;
}
// function to output the values
void output(int r, double c)
{
    cout<<"Inside output function\n";
    cout<<"Roll No:"<<r+1<<endl;
    cout<<"CGPA:"<<c+0.1<<endl;
}