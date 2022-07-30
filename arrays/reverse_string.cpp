#include <iostream>

using namespace std;

void reverseString(char arr[],int n){

   int i=0,j=n-1;
   char temp;

   while(i<j){

   	 temp = arr[i];
     arr[i]  =arr[j];
     arr[j] = temp;

     i++;
     j--;
   }
   
  
   

}


int main(){

	int i,n;

	cout<<"Enter the length of string : ";
	cin>>n;

	char str[n];
	
    cout<<"Enter string letters : "<<endl;
    
	for(i=0;i<n;i++)
	cin>>str[i];

	
reverseString(str,n);

cout<<"The reverse string is : "<<endl;
	for(i=0;i<n;i++)
	cout<<str[i];

cout<<endl;

return 0;
     	
	
}