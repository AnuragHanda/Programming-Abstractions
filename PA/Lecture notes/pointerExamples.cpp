#include<iostream>

using namespace std;

int main(){
    short myvar ='a';
    short *myvarptr = &myvar;
    cout<<"Value of myvar is:"<<myvar<<" and memsize is: "<<sizeof(myvar)<<endl;
    cout<<"Address of myvar is:"<<&myvar<<endl;
    cout<<"Value of myvarptr is:"<<myvarptr<<" and memsize is: "<<sizeof(myvarptr)<<endl;
    cout<<"Address of myvarptr is:"<<&myvarptr<<endl;

}