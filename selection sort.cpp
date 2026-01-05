#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
	int i,j;
	int min_index;
	for(i=0;i<n-1;i++){
		min_index=i;
		for(j=i+1;i<n;j++){
			if(arr[min_index]>arr[j]){
				min_index=j;
			}
			int temp=arr[min_index];
			arr[min_index]=arr[i];
			arr[i]=temp;
		}
	}
}

int main(){
	int n,i;
	cout<<"Enter the value of n: ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionsort(arr,n);
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
