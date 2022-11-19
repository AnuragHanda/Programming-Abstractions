#include<iostream>
using namespace std;
int main(){
    int n,hr,min,sec;
    cout<<"Enter time in seconds : "<<endl;
    cin>>n;
    hr=n/3600;
    min =n/60;
    sec=n%60;
    cout<<"seconds = "<<hr<<" hours , "<<min<<" minutes and "<<sec<<" seconds"<<endl;
    

}
