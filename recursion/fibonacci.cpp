#include <iostream>

using namespace std;

int fibonacci(int n){

	if(n<2)
	return n;

	return fibonacci(n-1) + fibonacci(n-2);
}



int main(){

	int n;
	cout<<"Enter the value of n : ";
	cin>>n;

	cout<<"The nth element is : "<<fibonacci(n-1)<<endl;

	return 0;
}