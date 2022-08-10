#include <iostream>

using namespace std;


class Node{

	public:
	int data;
	Node *next;
};

class Queue{

	public:
	int length;
	Node *first;
	Node *last;

	Queue(){
		this->length=0;
		this->first = NULL;
		this->last = NULL;
	}


	void peek(){

        if(this->length == 0)
        cout<<"Queue is empty"<<endl;
        else{
        	cout<<"The first element is : "<<this->first->data<<endl;
        }
		
	}

	void enqueue(int data){

		Node *new_node = new Node();

		new_node->data = data;
		new_node->next = NULL;

		if(this->length==0){
			this ->first =new_node;
			this->last = new_node;
			
		}
		else{

			this->last->next = new_node;
			this->last = new_node;
		}
		this->length++;
		
	}

	void dequeue(){

		if(this->length == 0)
		cout<<"The queue is empty"<<endl;
		else{
			this->first = this->first->next;
			this->length--;
		}
	}

	void display(){

		Node *ptr=this->first;

		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<endl;
	}

};

int main(){

	Queue q;

	int n=5;
    int data;
	for(int i=0;i<n;i++){
	cin>>data;
		q.enqueue(data);
	}

	cout<<"The queue is : "<<endl;
	q.display();

	q.peek();

	q.dequeue();
	cout<<"The queue after dequeing is : "<<endl;
	q.display();

	q.peek();

	return 0;
}