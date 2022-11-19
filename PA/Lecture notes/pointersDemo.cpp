#include<iostream>
using namespace std;

int main()
{
    char var='5';
    char *varptr=&var;

    cout<<"Value of Var is:"<<var<<endl;
    cout<<"Address of Var is:"<<&var<<endl;
    cout<<"value of pointer is:"<<varptr<<endl;
    cout<<"value pointed by pointer is:"<<*varptr<<endl;
    cout<<"Address of pointer is:"<<&varptr<<" and size is: "<<sizeof(varptr)<<" bytes";
    return 0;
}