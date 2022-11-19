// #include<iostream>
// using namespace std;

// class base{
// public:
// int b;
// void show(){
//     cout<<"show() base class \n";
//     cout<<"b="<<b<<"\n";
// }
// };
// class derived:public base{
//     public:
//     int d;
//     void show(){
//         cout<<"show() Derived class\n";
//         cout<<"b="<<b<<"\n"<<"d="<<d<<"\n";
    
//     }
// };
// int main(){
//     base b;
//     b.show();
//     derived d;
// }


#include <iostream>
using namespace std;
class first{
 private:
 int a,b,c;
 public:
 int d,e;

 int setdata(int a1,int b1,int c1);

 int getdata(){
    cout<<"value of a"<<a<<endl;
    cout<<"value of b"<<b<<endl;
    cout<<"value of c"<<c<<endl;  
    cout<<"value of d"<<d<<endl;  
    cout<<"value of e"<<e<<endl;  
 }
};
void first :: setdata(int a1,int b1,int c1){
    a=a1;
    b-b1;
    c=c1;
}
int main(){
    first ob;
    ob.getdata(2,5,6);
    ob.setdata();
    return 0;
}
