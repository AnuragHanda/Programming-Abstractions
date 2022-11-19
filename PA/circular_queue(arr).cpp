#include<iostream>
using namespace std;

class Queues{
    private:
    int front,rear,max;
    int q[50];
    public:
    Queue(){
        front = -1;
        rear = -1;
        max=0;
    }

    int isEmpty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int x){
        if(isEmpty()){
            front = 0;
            rear = 0;
            q[rear] = x;
        }
        else if((rear==max-1 && front==0)){
            cout<<"\nOverflow!";
        }
        else if(rear==max-1 && front!=0){
            rear = 0;
            q[rear] = x;
        }
        else{
            q[++rear] = x;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"\nUnderflow!!";
        }
        else if(front==rear){
            cout<<"\n"<<q[front]<<"is deleted";
            front = -1;
            rear = -1;
            cout<<"\nQueue Cleared!";
        }
        else if(front==max-1){
            cout<<"\n"<<q[front]<<"is deleted";
            front = 0;
        }
        else{
            cout<<"\n"<<q[front]<<"is deleted";
            front++;
        }
     }

    int getFront(){
        
        return q[front];
    
}
};
int main()
{
		Queues qob;  

	
	qob.enqueue(5);
	qob.enqueue(15);
	qob.enqueue(25);
	qob.enqueue(35);
	qob.enqueue(45);
	qob.isEmpty();
//	qob.dequeue();
//	qob.dequeue();
//	qob.dequeue();
//	qob.dequeue();
//	qob.dequeue();
	cout<<"element at front"<<qob.getFront();
 return 0;
}