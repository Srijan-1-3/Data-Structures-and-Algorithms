#include <iostream>

using namespace std;


class Node{

	public:
	int data;
	Node *left;
	Node *right;

	Node(int value){
		this->left = NULL;
		this->right = NULL;
		this -> data = value;
	}
};


class BinarySearchTree{

	public:
	Node *root;

	BinarySearchTree(){
		this->root = NULL;
		
	}

	void insert(int value){

	   Node* new_node = new Node(value);
       

       
		if(this->root == NULL){
			this->root = new_node;
			
		}
		else{
            Node *parent = NULL;
		    Node *ptr = this->root;

			while(ptr!=NULL){

                parent = ptr;
                if(value < ptr->data){
                	//LEFT

                	ptr = ptr->left;
                }
                else{
                	//RIGHT

                	ptr= ptr->right;
                }
                }

			   if(value < parent->data){
			   	parent->left = new_node;
			   	
			   }
			   else{
			   	parent->right = new_node;
			   }

              
		
	}
}

Node *lookup(int value){

   Node *ptr = this->root;

   if(this->root == NULL){
   	return NULL;
   }

   while(ptr != NULL){

   	if(value < ptr->data){
   		ptr = ptr->left;
   	}
   	else if(value > ptr->data){
   		ptr = ptr->right;
   	}
   	else{
   		return ptr;
   	   
   	}
   }

   return NULL;
	
}


void traverse(Node *ptr){

	if(ptr != NULL)
	{
        cout<<ptr->data<<" ";
	    traverse(ptr->left);
	    traverse(ptr->right);
	}


}


};

int main(){

	BinarySearchTree bst;

	int n=5;
    int val;
	cout<<"Enter the elements of the binary search tree : "<<endl;
	for(int i=0;i<n;i++){
		cin>>val;
		bst.insert(val);
	}

	cout<<"The BST is : "<<endl;
	bst.traverse(bst.root);
    cout<<endl;
    cout<<endl;
	Node *value;

	cout<<"Enter the number to be found : ";
	cin>>val;
    value = bst.lookup(val);

    if(value != NULL)
    cout<<"The value "<<value->data<<" was found"<<endl;
   else
   cout<<"The value was not found"<<endl;
   	return 0;
}
