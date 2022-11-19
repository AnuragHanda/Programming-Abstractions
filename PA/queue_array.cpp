#include <iostream>
using namespace std;
int queue[50];
int n = 50;
int front = - 1;
int rear = - 1;

void Enqueue() {
   int val;
   if (rear == n - 1)
      cout<<"Queue Overflow"<<endl;
   else {
    
      front = 0;
      cout<<" insert value in the queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}

void Dequeue() {
   if (front == - 1) {
      cout<<"Queue Underflow ";
   return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display () {
   if (front == - 1 )
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
         cout<<queue[i]<<" ";
      cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) insertion element to the queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
do {
   cout<<"Enter your choice : "<<endl;
   cin>>ch;
   switch (ch) {
      case 1: Enqueue();
         break;
      case 2: Dequeue();
         break;
      case 3: Display_Queue ();
         break;
      case 4: cout<<"Exit"<<endl;
         break;
      default: cout<<"Invalid choice"<<endl;
   }
} while(ch!=4);
   return 0;
}

//.................................................................//


#include <iostream>
using namespace std;
class node
{
public:
int data;
node*next;	
};
class Queues
{
	
    private:
    node*Rear;
    node*Front;
    int max,count;
	
	public:
		Queues()
		{
		Front = NULL;
        Rear = NULL;
        count = 0;
        max=5;
			
		}

int isEmpty()
		{
			if(Front==NULL)
			{
				return 1;
				cout<<"Empty queue";
			}
			else
			{
				return 0;
				cout<<"Not empty";
			}
	}
void getFront(){
       
            cout<<"\nFirst Element is: "<<Front->data;
        
    }
		

		void enqueue(int x)
		{
			node*new_node;
			if(Front==NULL)
			{
			new_node=new node;
			new_node->data=x;
			new_node->next=NULL;
			Front=new_node;
			Rear=new_node;
			count++;
			}
            else if(Rear==Front)
			{
				cout<<"!!!OverFlow!!!";
			}
			else
			{
			new_node=new node;
			new_node->data=x;
			new_node->next=NULL;
			Rear->next=new_node;
			Rear=new_node;
			}
			
		}
   
		void dequeue()
		{
			if(Front==NULL)
			{
				cout<<"!!!Underflow";
			}
			else if(Front==Rear)
			{
				
				cout<<"deleted element is "<<Rear->data;
				Rear->next=NULL;
				delete Rear;
				delete Front;
				Front=NULL;
				Rear=NULL;
				count=0;
				cout<<"\n queue is empty now";
			}
			else
			{
				//cout<<"deleted element"<<Q[Front++];//Front++;
			cout<<"\n"<<Front->data<<"\n deleted";
            Front = Front->next;
            count--;
			}
		}
};
int main()
{
		Queues qob; 
	qob.isEmpty();
//	qob.dequeue();
    qob.enqueue(6);
    qob.enqueue(7);
    qob.enqueue(6);
    qob.enqueue(10);
    qob.enqueue(15);
//    
    
    
//			qob.isEmpty(); 
//	qob.dequeue();		
//	qob.enqueue(5);
//	qob.enqueue(15);
//	qob.enqueue(25);
//	qob.enqueue(35);
//	qob.enqueue(45);
//	qob.Isempty();
//	qob.dequeue();
//	qob.dequeue();
//	qob.dequeue();
//	qob.dequeue();
//	qob.dequeue();
//qob.enqueue(56);
//	cout<<" front pointing at"<<qob.getFront();
 return 0;
}