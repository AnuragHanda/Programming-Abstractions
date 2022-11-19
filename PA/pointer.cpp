#include<iostream>
using namespace std;

int main()
{
    int x=5, z=10;
    int * const ptr =&x;
    cout<<"Value of X:"<<x<<endl;
    cout<<"address of X:"<<&x<<endl;
    cout<<"Value of ptr:"<<ptr<<endl;
    cout<<"value pointed by ptr"<<*ptr<<endl;
    cout<<"address of ptr:"<<&ptr<<endl;
    *ptr=18;
    cout<<"Updated Value of X:"<<x<<endl;
    
    cout<<"*****changing the reference of PTR*****"<<endl;
    ptr =&z;
    cout<<"Value of z:"<<z<<endl;
    cout<<"address of z:"<<&z<<endl;
    cout<<"Value of ptr:"<<ptr<<endl;
    cout<<"value pointed by ptr"<<*ptr<<endl;
    cout<<"address of ptr:"<<&ptr<<endl;

}