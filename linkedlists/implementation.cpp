#include <iostream>

using namespace std;


void prepend(int data);

class Node{
    public:
	int data;
    Node *next;
};

Node *head=NULL;

void insert(int data,int pos){

 Node *new_node = new Node();
 new_node->data = data;

 Node *ptr=head;

if(pos<0){
	cout<<"Invalid input";
}
else if(pos==0){
	prepend(data);
}
else{
for(int i=0;i<pos-2;i++)
ptr = ptr->next;

new_node->next = ptr->next;

ptr->next = new_node;

 }
 
}

void remove(int pos)
{

Node * ptr=head;
int i;

for(i=0;i<pos-2;i++)
ptr = ptr->next;

ptr->next = ptr->next->next;


}

void prepend(int data){

	Node *new_node = new Node();
	new_node->data = data;
	
	new_node->next = head;

	head = new_node;
}

void append(int data){

   Node *ptr;
   Node *new_node = new Node;
   new_node ->data = data;
   new_node ->next = NULL;
   if(head == NULL){
   	   
   	   head = new_node;
   }
   
   else{ 
    

    ptr=head;

    while(ptr->next != NULL){
    	ptr = ptr->next;

    }
    
    ptr->next = new_node;
    
    
   	}
   }



 void reverse(){

 	Node *first = head;
 	Node *second = first->next;
    Node *temp;
 	while(second){

 		temp = second->next;
 		second->next = first;
 		first = second;
 		second = temp;
 	}
 	head->next = NULL;
 	head=first;
 }
   


void display(){
	Node *ptr =head;
	while (ptr != NULL){
		cout<< ptr->data << " ";
		ptr = ptr->next;
	}
}



int main(){
   int n,data;
   cout<<"Enter the length of linked list : "<<endl;
   cin>>n;

   cout<<"Enter the elements : "<<endl;
   for(int i=0;i<n;i++){
   	cin>>data;
   	append(data);
   }
   
   prepend(9);
   prepend(1);
    
   cout<<"The linked list is : ";
   display();
   cout<<endl;

   insert(3,3);
   cout<<"The linked list after insertion is : "<<endl;
   display();
   cout<<endl;


   remove(3);
   cout<<"The linked list after deletion is : "<<endl;
   display();
   cout<<endl;


  reverse();
  cout<<"The linked list after reversing is : "<<endl;
  display();
   

	return 0;
}