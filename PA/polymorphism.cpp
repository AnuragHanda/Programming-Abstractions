// #include <iostream>
// using namespace std;
// class Base{
//   public:
//     int b;
//        void show(){
//       cout<<"Show() base class \n";
//       cout<<"b = "<<b<<"\n";
//     }
// };
// class Derived:public Base{
//   public:
//     int d;
//     void show(){
//       cout<<"Show() derived class \n";
//       cout<<"b = "<<b<<"\n"<<"d = "<<d<<"\n";
//     }
// };
// int main(){
//   Base *bptr;
//   Base baseObj;
//   bptr=&baseObj;
//   bptr->b=10;
//   cout<<"Right now base class pointer poiting to base class object\n";
//   bptr->show();
//   Derived derivedObj;
//   bptr=&derivedObj;
//   bptr->b=90;


// cout<<"Right now base class pointer poiting to base class object\n";
// bptr->show();
// Derived*dptr;
// dptr=&derivedObj;
// dptr->d=300;
// cout<<"Right now using\n";
// dptr->show();
// cout<<"using the typecasting";
// ((Derived*)bptr)->d=40;
// ((Derived*)bptr)->show();
// return 0;

#include <iostream>
using namespace std;
class Base{
  public:
    int b;
       void show(){
      cout<<"Show() base class \n";
      void display(){
        cout<<"display base class "
      }
    }
};
class Derived:public Base{
  public:
    int d;
    void show(){
      cout<<"Show() derived class \n";
      cout<<"b = "<<b<<"\n"<<"d = "<<d<<"\n";
    }
};
int main(){
Base bObj;
Derived dObj;

Base *bptr;
cout<<"\n bptr points to base class object ";
bptr =&bObj;
bptr->display();
bptr->show();
cout<<"\n bptr points to derived class object ";
bptr =&dObj;
bptr->display();
bptr->show();
return 0;

}