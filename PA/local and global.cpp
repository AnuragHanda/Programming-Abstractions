#include<iostream>
using namespace std;
//int main(){
// int a;
// cout<<a<<endl;
// {
//     int a;
//     cout<<a<<endl;

// }
// cout<<a<<endl;
// return 0;
//int a,b;
//int c;
////actual initiallisation 
//a=10;
//b=20;
//c=a+b;
//cout<<c;
//return 0;
//}


int g=75;//global variable declaration
int main(){
int a,b;
a=10;
b=20;
 int g=a+b;
cout<<g<<endl;
cout<<::g<<endl;
cout<<sizeof(a)<<endl;
int x,y;
y=2+(x=5);//y=2+x;
cout<<y;
return 0;

}

