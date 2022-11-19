#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
class Car
{
public:
      int Carcode, carprice ,CarQuantity;
public:
    Car(int Carcode, int carprice ,int CarQuantity)
    {
        this->Carcode = Carcode;
        this->carprice = carprice;
        this->CarQuantity = CarQuantity;
    } 
    void stockVal(){
      cout<<"Stock value is: "<<CarQuantity<<endl;
  }  
};
int main()
{
vector<Car> cars;
int n;
cout<<"Enter number of cars you want to add: ";  
  
cin>>n;
  
for(int i=0;i<n;i++){
  int Carcode, carprice ,CarQuantity;
  
  cout<<"Enter car code: ";
  cin>>Carcode;
  
  cout<<"Enter car price: ";
  cin>>carprice;
  
  cout<<"Enter car quantity: ";
  cin>>CarQuantity;
  
  cars.push_back(Car(Carcode, carprice ,CarQuantity));
  
}
for(int i=0;i<n;i++){
  cars[i].stockVal();
}

    return 0;
}
