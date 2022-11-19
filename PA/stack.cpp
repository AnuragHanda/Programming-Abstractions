#include<iostream>
using namespace std;
template <class t> 
class Stack{
    private:
    t stk[10];
    t top;
    t capacity=0;
    t ele;
    public:

    Stack(){
        capacity=5;
        top=-1;
    }
    void push(t ele){
        if(top==capacity+1){
            cout<<"Overflow"<<endl;
        }
        else{
            top++;
            stk[top]=ele;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"UNderflow"<<endl;
        }
        else{
            cout<<"deleted "<<stk[top]<<endl;
            top--;
        }
    }
    
    void get_top(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Element on top of stack is "<<stk[top];
        }

    }

};
int main(){
  Stack <double> ob;
  ob.push(1.0);
  ob.push(2);
  ob.push(3);
  ob.push(4);
  ob.push(5.6);
//ob.pop();
//   ob.pop();
//   ob.pop();
  ob.get_top();
}

