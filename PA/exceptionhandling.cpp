#include<iostream>
using namespace std;
// int main(){
//     int a,b,result;
//     cin>>a>>b;
  
//     try{
//         if(b==0){
//             throw b;

//         }
//         else{
//         result=a/b;
//         cout<<result;
//         }
//     }
//     catch(...){ //("..." means exception handling )
//         // cout<<"Divide by zero";
//          cout<<"Unhandled Exception";
//     }
//     return 0;
// }


// void func(int a, int b){
// 	try{
// 		if(b==0){
// 			throw b;
// 		}else{
// 			cout<<a/b<<endl;
// 		}
// 	}
// 	catch(...){											
// 		cout<<"Exception Handling"<<endl;				//Three types of throw :
// 		throw;											//throw b;
// 	}													//throw (b); same as above
// 														//throw; Re Throw
// }

// int display(int a,int b){
// 	try{
// 		func(a,b);
		
// 	}
// 	catch(...){
// 		cout<<"Exception Occurred"<<endl;
// 		throw;
// 	}
// }

// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	try{
// 		display(a,b);
		
// 	}
// 	catch(...){
// 		cout<<"Exception Occurred..."<<endl;
// 	}
// }
// 
//.........Generic Calculator.............//'

template <class calc>
class Calculator{
	public:
	calc a,b;
    Calculator(calc a,calc b){
		this->a=a;
		this->b=b;
	}
    calc add()	{	
		return a+b;
	}
	calc sub()	{	
		return a-b;
	}
	calc multiply()	{	
		return a*b;
	}
	calc divide()	{	
		return a/b;
	}
};
int main(){
	Calculator<float>c(30.5,10.0);
	cout<<c.add()<<endl;
	cout<<c.sub()<<endl;
	cout<<c.multiply()<<endl;
	cout<<c.divide()<<endl;


}