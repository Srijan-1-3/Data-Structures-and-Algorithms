include <iostream>

using namespace std;



void merge(int *arr,int beg,int mid,int end){

	int n1,n2;

	n1 = mid-beg+1;
	n2 = end-mid;
   
	int left[n1],right[n2];

    for(int i=0;i<n1;i++)
    left[i] = arr[beg+i];
    for(int j=0;j<n2;j++)
    right[j] = arr[mid +1 + j];


    int i=0,j=0,k=beg;

    while(i<n1 && j<n2){

    	if(left[i] <= right[j]){
    		arr[k] = left[i];
    		i++;
    		
    	}
    	else{
    		arr[k] = right[j];
    		j++;
    	}
    	k++;
    }
    while(i<n1){
    	arr[k] = left[i];
    	i++;
    	k++;
    }
    while(j<n2){
    	arr[k] = right[j];
    	j++;
    	k++;
    }
	
}
void mergesort(int *arr,int beg,int end)
{

	if(beg<end){
		int mid = (beg+end)/2;

		mergesort(arr,beg,mid);
		mergesort(arr,mid+1,end);

		merge(arr,beg,mid,end);
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

  cout<<"The array after sorting is : "<<endl;
   mergesort(arr,0,n-1);
   display(arr,n);

   return 0;
	
}