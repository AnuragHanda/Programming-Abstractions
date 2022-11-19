#include<iostream>
using namespace std;
int inttype;
float floattype;
char chartype;
double doubletype;
bool boolean;
short shorttype;
long long longtype;

int main(){

    //Finding size of all data types using operator "sizeof"
    cout<<"Size of CHAR data type is : "<<sizeof(chartype)<<""<<endl;
    cout<<"Size of BOOLEAN data type is : "<<sizeof(boolean)<<endl;
    cout<<"Size of SHORT data type is : "<<sizeof(shorttype)<<endl;
    cout<<"Size of INT data type is : "<<sizeof(inttype)<<endl;
    cout<<"Size of FLOAT data type is : "<<sizeof(floattype)<<endl;
    cout<<"Size of DOUBLE data type is : "<<sizeof(doubletype)<<endl;
    cout<<"Size of LONGLONG data type is : "<<sizeof(doubletype)<<endl;
}
