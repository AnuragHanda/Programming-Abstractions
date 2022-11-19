#include <iostream>
using namespace std;

class temp{
    int a, b;
    public:
    temp(int =0, int =0){
        a= ;
        b= ;
        cout<<"overloaded constructor"<<endl;
    }
    temp(temp &){
        a= .a;
        b= .b;
        cout<<"copy constructor"<<endl;
    }
     void temp operator *(const temp &){
        this ->a= .a;
        this ->b= .b;
        cout<<" "<<;
     }
    };
int main(){
temp obj1;
temp obj2(2,3);
temp tobj(obj2);
temp tobj = obj2;
obj1=obj2;
temp tobj;
tobj2=obj1;
tobj2 = operators(tobj1);
return 0;
}
