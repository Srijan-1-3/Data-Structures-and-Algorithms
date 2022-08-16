#include <iostream>


using namespace std;


void insertionSort(int *arr,int n){


	int i,j,key;

	for(i=1;i<n;i++){

		key = arr[i];
		j=i-1;

		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = key;
	}
}

void display(int *arr,int n){

	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){

	int n;
	cout<<"Enter the length of array : ";
	cin>>n;

	int arr[n];

	cout<<"Enter the array elements : "<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];

	cout<<"The array is : "<<endl;
	display(arr,n);

	cout<<"The array after sorting is  :"<<endl;
	insertionSort(arr,n);
	display(arr,n);

	return 0;
}