#include <iostream>

using namespace std;

int *merge(int arr1[],int arr2[],int n1,int n2){

int index_first=0,index_second =0,index=0;

int *arr  = new int[n1+n2];

while(index_first<n1 && index_second<n2){

	if(arr1[index_first]<arr2[index_second]){
		arr[index] = arr1[index_first];
		index_first++;
	}
	else{
		arr[index] = arr2[index_second];
		index_second++;
	}
	index++;

	if(index_first == n1){

		while(index_second<n2){
			arr[index]  =arr2[index_second];
			index_second++;
			index++;
		}
	}
	else if(index_second == n2){

		while(index_first<n1){
			arr[index] = arr1[index_first];
			index_first++;
			index++;
		}
	}
	
}
return arr;	
}

int main(){

	int i,n1,n2;
	
	
	cout<<"Enter the length of array 1 : "<<endl;
	cin>>n1;

	cout<<"Enter the length of array 2 : "<<endl;
	cin>>n2;

	int a1[n1],a2[n2];

	cout<<"Enter the elements in array 1 : "<<endl;
	for(i=0;i<n1;i++){
		cin>>a1[i];
	}

	cout<<"Enter the length of array 2 : "<<endl;
	for(i=0;i<n2;i++){
		cin>>a2[i];
	}

 int *newArr = merge(a1,a2,n1,n2);

 for(i=0;i<n1+n2;i++){

 	cout<<newArr[i]<<" ";
 }
cout<<endl;

return 0;
	
}