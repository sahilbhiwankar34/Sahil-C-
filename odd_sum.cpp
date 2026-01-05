#include<iostream>
using namespace std;
int main() {
	int i=1;
	int sum=0;
	cout<<"\n Odd Number\n";
		while(i<=100){
		if(i%2!=0){
			cout<<"\n"<<i;
			sum=sum+i;
			
		}	
		i++;
		
		}
		cout<<"\nSum: "<<sum;
		return 0;
	}
