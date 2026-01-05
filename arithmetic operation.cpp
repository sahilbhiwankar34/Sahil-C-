#include<iostream>
int main() {
	int a,b,c;
	
	
	std::cout<<"Enter the value of a and b: ";
		std::cin>>a>>b;
		c=a+b;
		std::cout<<"The addition of number is: "<<c;
		c=a-b;
		std::cout<<"\nThe subtraction of number is: "<<c;
		c=a*b;
		std::cout<<"\nThe multiplication of number is: "<<c;
		c=a/b;
		std::cout<<"\nthe division of number is: "<<c;
		c=a%b;
		std::cout<<"\nThe modulus of number is: "<<c;
	return 0;
}
