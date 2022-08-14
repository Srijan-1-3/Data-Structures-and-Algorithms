#include <iostream>

using namespace std;


void selectionSort(int *arr,int n){

	int i,j,min,temp;
    
	for(i=0;i<n;i++){
      min = i;
	  for(j=i+1;j<n;j++){

         if(arr[j]< arr[min])
         min =j;
	  	 
	  }

	  temp = arr[i];
	  arr[i] = arr[min];
	  arr[min] = temp;

}
}

int main(){


	int n;
	cout<<"Enter the length of array : ";
	cin>>n;
    int arr[n];
	cout<<"Enter the array elements : "<<endl;
	for(int i =0;i<n;i++)
	cin>>arr[i];

    cout<<"The array is : "<<endl;

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    cout<<"The array after sorting is : "<<endl;
    selectionSort(arr,n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;


    return 0;
    
	
}