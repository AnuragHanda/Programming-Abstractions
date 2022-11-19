#include<iostream>
using namespace std;
class num{
    int x;
    public:
    num(){
        x=0;
    }
    void operator++(){
        cout<<"prefix"<<endl;
        x=x+1;

    }
    void operator++(int a){
       x=x+1;
       cout<<"postfix"<<endl;
    }
    void print(){
        cout<<"value of x : "<<x<<endl;
    }

};
int main()
{
    num n;
    n.print();
    ++n;
    n.print();
    n++;
    n.print();
    return 0;
}