#include <iostream>

using namespace std;


class Node{
    public:
	int data;
	Node *next;
	Node*prev;
};

Node *head = NULL;

void append(int data){

  Node *new_node = new Node();
  new_node->data = data;
  new_node->next = NULL;
 

  if(head==NULL){
    new_node->prev = NULL;
  	head = new_node;
  	
   }
  else{
  	Node *ptr = head;
  	while(ptr->next != NULL){
  		ptr = ptr->next;
  	}
  	ptr->next = new_node;
  	new_node->prev=ptr;
  }
}

void prepend(int data){
	Node *new_node = new Node();
	new_node ->data = data;
	new_node->next = head;
	new_node->prev = NULL;
	head = new_node;
}


void insert(int data,int pos){

	Node* new_node = new Node();
	new_node->data = data;
	Node *ptr = head;

	if(pos < 0 ){
		cout<<"Invalid Position"<<endl;
	}
	else if(pos==0){
		prepend(data);
	}
	else{

	for(int i=0;i<pos-2;i++){
		ptr = ptr->next;
	}

    new_node->next = ptr->next;
    new_node->prev = ptr;
    ptr->next->prev=new_node;
	ptr->next = new_node;
}
}

void remove(int pos){

 Node *ptr = head;
 if(pos<0)
 cout<<"Invalid Postion"<<endl;
 else if(pos==0){
    ptr->next->prev = NULL;
 	head = ptr->next;
 	
 	
 }
 else{
 	for(int i=0;i<pos-2;i++){
 		ptr = ptr->next;
 	}
    ptr->next->next->prev = ptr;
 	ptr->next = ptr->next->next;
 }
}
void display(){
	Node *ptr = head;

	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<endl;
	
}

void reverse(){
	Node *ptr = head;
	while(ptr->next!=NULL)
	ptr=ptr->next;

	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->prev;
		
	}
	cout<<endl;
}

int main(){

  int n;
  cout<<"Enter the length of linked list : ";
  cin>>n;
  int data;

  for(int i=0;i<n;i++){
    cin>>data;
  	append(data);
  }
  cout<<"The linked list is : "<<endl;
  display();

  cout<<"The linked list in reverse is : "<<endl;
  reverse();

  prepend(0);
  cout<<"The linked list after prepending is : "<<endl;
  display();

  insert(100,1);
  insert(200,4);
  cout<<"The linked list after inserting is : "<<endl;
  display();

   remove(0);
   remove(1);
   cout<<"The linked list after deleting is : "<<endl;
   display();
   
  return 0;
}