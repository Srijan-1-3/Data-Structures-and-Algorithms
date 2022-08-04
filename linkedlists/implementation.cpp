#include <iostream>

using namespace std;


class Node{
    public:
	int data;
    Node *next;
};

Node *head=NULL;

void insert(int data){

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
   	insert(data);
   }
   

    
   cout<<"The linked list is : ";
   display();
   cout<<endl;
   

	return 0;
}