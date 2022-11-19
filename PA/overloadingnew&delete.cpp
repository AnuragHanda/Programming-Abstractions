#include <iostream>
#include <cstdlib>
using namespace std;

// class student{
//   string name;
//   int age;
//   public:
//     student(string name,int age){
//       this->name=name;
//       this->age=age;
//     }
//     void display(){
//       cout << "Name of Person:- "<<name<<endl;
//       cout << "Age of Person:- " << age<<endl;
//     }
//     void * operator new(size_t size){
//       cout << "Overloading new operator with size: "<<size<<endl;
//       void *p= ::operator new(size);
//       return p;
//     }
    
//     void operator delete(void *p){
//       cout << "Overloading delete operator"<<endl;
//       free(p);
//     }
// };




// int main(){
  
//   student *p = new student("C Plus Plus",4);
//   p->display();
//   delete p;
//   return 0;
// }

////////////////////////////////////////////////////////////////////////////
//.....Assignment Operator Overloading.....//

class Distance {
    int feet;
    int inches;
    public:
    Distance(){
        feet=0;
        inches=0;

    }
    Distance(int f,int i){
        feet=f;
        inches=i;
    }
    void operator=(const Distance &D)
    {
        feet=D.feet;
        inches=D.inches;
    }
    void displayDistance(){
        cout<<feet<<"feets"" \t" <<inches<<"inches"<<endl;
    }
};
int main(){
    Distance D1(11,10), D2(5,11);
    cout<<"First Distance : ";
    D1.displayDistance();
    cout<<"Second Distance : ";
    D2.displayDistance();
    D1=D2;
    cout<<"First Distance";
    D1.displayDistance();
    return 0;
}