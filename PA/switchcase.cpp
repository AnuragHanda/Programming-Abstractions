#include<iostream>
using namespace std;
int main(){
cout<<"For how many user you want to find grade : "<<endl;
int n;
cin>>n;
int cg;

while(n--){
    cout<<"Enter CGPA "<<endl;
    cin>>cg;
switch(cg){

    case 10:
        cout<<"Outstanding"<<endl;
        break;
    
    case 8:
        cout<<"Excellent"<<endl;
        break;
    case 7: 
        cout<<"Very Good"<<endl;
        break;
    
    case 6:
        cout<<"Good"<<endl;
        break; 
    case 5:
        cout<<"Fair"<<endl;
        break; 
    case 4:
        cout<<"Satisfactory"<<endl;
        break; 
    case 3:
        cout<<"Fair"<<endl;
        break; 
    default:
         cout<<"Failed";

}
}

}




