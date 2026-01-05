#include<iostream>
int main() {
	int a,b,c,d;
	int x;
	
	std::cout<<"Enter the value of a,b,c,d: ";
		std::cin>>a>>b>>c>>d;
		x=(a+b)-(a+c)*d;
		std::cout<<"\nThe value of x is: "<<x;
	return 0;
}
