#include<iostream>
using namespace std;
void output(int,float);
void output(int *,float *);
void output(int r,float c){
    cout<<"roll no is"<<r<<endl;
    cout<<"cgpa is"<<c<<endl;
}

int main(){

// int roll;
// float cgpa;
// char gender;
// cout<<" Enter information about student"<<endl;
// cout<<"Enter Roll number"<<endl;
// cin>>roll;
// cout<<"Enter Cgpa "<<endl;
// cin>>cgpa;
// cout<<"Enter Gender"<<endl;
// cin>>gender;
// cout<<endl;
// cout<<"Roll Number is : "<<roll<<endl;
// cout<<"Cgpa is : "<<cgpa<<endl;
// cout<<"Gender is : "<<gender<<endl;

int roll;
int cgpa;
cout<<"enter values:"<<cgpa;
cin>>roll>>cgpa;
output(roll,cgpa);

}
void output(){
 cout<<"roll number is: "<<r<endl;
  cout<<"cgpa is: "<<c<<endl;
}
void output(int *r,float *c){
cout<<"roll no:"<<*r<<endl;
cout<<"Cgpa "<<*c<<endl;
}