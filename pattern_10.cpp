#include<iostream>
using namespace std;
int main() 
{
	int i,j,s;
	for(i=1;i<=4;i++){
		for(j=4;j>=i;j--){
			cout<<"*";
		}
		cout<<"\n";
	}

	for(i=1;i<=4;i++){
		for(s=1;s<=i-1;s++){
			cout<<" ";
		}
		for(j=4;j>=i;j--){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}

