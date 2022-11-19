#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
};
class Stack_ll{
    private:
    Node *top ;
    int capacity;
    int counter;
    public:
    Stack(){
        top = NULL;
        capacity = 5;
        counter = 0;
    }
void push(int element){
        Node *new_node;
        if(top==NULL){
            new_node = new Node;
            new_node->data = element;
            new_node->next = top;
            top = new_node;
            counter++;
        }
};
int main(){
    Stack_ll st;

}