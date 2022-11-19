 
#include <iostream>
using namespace std;
class node{
	public:
		int data;
		node*next; 
};

class SinglyLL( )
{
	
	node*start;
	public:
		SinglyLL()
        {
        	start=null;
		}
    void create_LL()

    {
    	node*new_node;
    	new_node = new node;
    	if(new_node==NULL)
    	{
    		cout<<"memory not allocated";
    		
		}
		else
		cout<<"memory located"<<new_node;
	    
	
	
	}
}