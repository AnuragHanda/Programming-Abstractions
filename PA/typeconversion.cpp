// #include <iostream>

// using namespace std;

// class Feet{
//     public:
//     int feet;                                     ...........feet to inches ............
//     int inches;
//     Feet(int f=0, int i=0){
//         feet = f;
//         inches = i;
//     }
// };

// class Inches{
//     int inches;
//     public:
//     Inches(int i=0){
//         inches = i;
//     }
//     Inches(Feet &f){
//         inches = f.feet*12 + f.inches;
//     }
//     Inches operator=(Feet &f){
//         Inches tmp;
//         tmp.inches = f.feet*12 + f.inches;
//         return tmp;
//     }
//     void display(){
//         cout << inches << '\n';
//     }
// };

// int main(){
//     Feet f(2,11);
//     Inches i(f);
//     i.display();
//     Inches i2 = f;
//     i2.display();
// }


////////////////////////////////////////////////////

#include <iostream>

using namespace std;
                                //.............inches to feet........................//
class Feet{
    public:
    float feet;
    float inches;
    Feet(int f=0, int i=0){
        feet = f;
        inches = i;
    }
};                                      

class Inches{
    float inches;                    
    public:
    Inches(int i=0){
        inches = i;
    }
    Inches(Feet &f){
        inches = f.feet/12 + f.inches;
    }
    Inches operator=(Feet &f){
        Inches tmp;
        tmp.inches = f.feet/12 + f.inches;
        return tmp;
    }
    void display(){
        cout << inches << '\n';
    }
};

int main(){
    Feet f(12);
    Inches i(f);
    i.display();
   // Inches i2 = f;
    //i2.display();
}