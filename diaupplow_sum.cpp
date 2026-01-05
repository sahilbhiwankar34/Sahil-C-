#include<iostream>
using namespace std;
int main(){
	int a[10][10],i,j,r,c;
	cout<<"Enter the number of row and column: \n";
	cin>>r>>c;
	cout<<"Enter the elements of array: \n";
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		cin>>a[i][j];
		}
	}
	cout<<"The array is : \n";
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		cout<<a[i][j];
		}
	}
	cout<<"\n";
	int sum =0;
	int count=0;
	int upper=0;
	if(r==c){
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(i==j){
					sum=sum+a[i][j];
				}
				else if(i>j){
					count=count+a[i][j];
				}
				else if(i<j){
					upper=upper+a[i][j];
				}
				else{
					cout<<"Wrong input";
				}
			}
		}
		cout<<"The sum of diagonal elements is : "<<sum<<"\n";
		cout<<"The sum of upper triangular matrix is: "<<upper<<"\n";
		cout<<"The sum of lower triangular matrix is : "<<count<<"\n";
	}
	else{
		cout<<"Wrong input";
	}
	return 0;
	
}
