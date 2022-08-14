#include<iostream>

using namespace std;



void bubbleSort(int *arr,int n){

int i,j,temp;

for(i=0;i<n;i++){

	for(j=i+1;j<n;j++){

		if(arr[j]<arr[i]){

			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			
		}
	}
}

	
}


int main(){

    int i, n;
    cout<<"Enter the length of array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements : "<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];


    cout<<"The array is  :"<<endl;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    cout<<"The array after sorting is : "<<endl;

    bubbleSort(arr,n);

    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    return 0;

    
	
}