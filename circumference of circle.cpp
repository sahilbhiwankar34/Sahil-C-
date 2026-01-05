#include<iostream>
#define PI 3.142
int main() {
	float a;
	float c;
	
	std::cout<<"Enter the area of circle: ";
		std::cin>>a;
		c=2*PI*a;
		std::cout<<"\nThe circumference of circle is: "<<c;
	return 0;
}
