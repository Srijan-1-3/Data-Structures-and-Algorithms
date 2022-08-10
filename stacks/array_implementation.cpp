#include <iostream>

using namespace std;

class Stack{

	public:
	int top;
	int length;
	int *arr;

	Stack(int l){
		this->top = -1;
		this->length = l;
		this->arr = new int[length];
	}

	void peek(){

	    if(this->top<0)
	    cout<<"The stack is empty : "<<endl;
	    else
		cout<<"The top element is : "<<arr[this->top]<<endl;

		
	}

	void push(int data){

     if(this->top >= this->length-1)
     cout<<"Stack overflow"<<endl;
     else{
     	this->top++;
     	arr[this->top] = data;
     }        
	}

	void pop(){
		if(this->top<0)
		cout<<"The stack is empty";
		else{
		    cout<<"Popped element is : "<<this->top<<endl;
			this->top--;
		}
	}

	void display(){
		for(int i=top;i>=0;i--)
		cout<<this->arr[i]<<" ";
		cout<<endl;
	}
	
};

int main(){

	int n,i,data;
	cout<<"Enter the length of the stack : ";
	cin>>n;

	Stack s(n);

	for(i=0;i<n+1;i++){
	    cin>>data;
		s.push(data);
	}

	cout<<"The stack is : "<<endl;
	s.display();


	
	s.peek();

	s.pop();

	s.peek();

	return 0;
}