#include<iostream>
using namespace std;
#include<iomanip>
int main(){
int val=5;
float pi=3.14;
float result = val*val*pi;
cout<<"area of circle is :"<<setw(6)/*set width of 10 */<<setfill('0')/*fills blank space with value inside*/<<result<<endl;
}