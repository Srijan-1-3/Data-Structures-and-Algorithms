#include <iostream>

using namespace std;


class Node{

	public:
	int data;
	Node *next;
};




class Stack{

	public:
	Node* top;
	Node *bottom;
	int length;

	Stack(){
		this->top = NULL;
		this->bottom = NULL;
		this->length = 0;
	}

	void peek(){

	  cout<<"The top element is : "<<this->top->data;
	}

	void push(int data){
	   Node *new_node = new Node();
	   new_node->data = data;

	   if(this->length == 0){
	   	this->top = new_node;
	   	this->bottom = new_node;
	   }
	   else{
	   new_node->next = this->top;
	   this->top = new_node;
	   	}

	   	this->length++;
	}

    void pop(){

         if(this->length ==0)
         cout<<"The stack is empty";
         else if (this->top == this->bottom){
         this->top = NULL;
         this->bottom = NULL;
         this->length--;
         cout<<"empty";
         }
         else{
    	this->top = this->top->next;
    	this->length--;
    	}
    	}
    	
    
	void display(){

		Node *ptr=this->top;

		while(ptr != NULL){
			cout<<ptr->data<<endl;
			ptr = ptr->next;
		}
		
	}
	
};


int main(){

	Stack s;
    int n=5;
    int data;
    cout<<"Enter the elements to be addes to the stack : ";
    for(int i=0;i<n;i++){
    	cin>>data;
    	s.push(data);
    }


    cout<<"The stack is : "<<endl;
    s.display();


    cout<<"The top element is : ";
    s.peek();
    cout<<endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    
    cout<<"The stack after popping is : "<<endl;
    s.display();
    return 0;
}


