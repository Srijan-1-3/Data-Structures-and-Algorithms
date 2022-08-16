#include <iostream>
#include <vector>
#include <queue>

using namespace std;


class Node{

	public:
	int data;
	Node *left;
	Node *right;

	Node(){
		this->left = NULL;
		this->right = NULL;
	}
};

class BST{

	public:
	
	Node *root;

	BST(){

		
		this->root = NULL;
	}


	void insert(int value){

        Node *new_node = new Node();
        new_node->data = value;
		if(this->root == NULL)
		this->root = new_node;

		
        else{
        	Node *ptr = this->root;
        	Node *parent = NULL;

        	while(ptr !=NULL){

        		parent = ptr;
        		if(value< ptr->data){
        			ptr = ptr->left;
        		}
        		else{
        			ptr = ptr->right;
        		}
        	}

        	if(value < parent->data)
        	parent->left = new_node;
        	else
        	parent->right = new_node;
        }

        
        
        		
	}

	void bfs(){

      vector<int> list;
      queue<Node *> levelqueue;

      Node *ptr = this->root;
      levelqueue.push(ptr);

      

      while(levelqueue.size()>0){
        ptr = levelqueue.front();
        levelqueue.pop();
        list.push_back(ptr->data);
      	if(ptr->left != NULL)
      		levelqueue.push(ptr->left);
      	
      	if(ptr->right != NULL)
      	levelqueue.push(ptr->right);
      }

      for(int i=0;i<list.size();i++)
      cout<<list[i]<<" ";

      cout<<endl;
	
		
	}
};


int main(){


	BST b;

	b.insert(9);
	b.insert(4);
	b.insert(20);
	b.insert(1);
	b.insert(6);
	b.insert(15);
	b.insert(170);

    cout<<"The bfs traversla is as follows : "<<endl;
	b.bfs();

	return 0;
}