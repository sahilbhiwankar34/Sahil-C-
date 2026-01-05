#include<iostream>
int main() {
	int n;
	float p,r,si;
	
	
	std::cout<<"Enter the number of years";
		std::cin>>n;
		std::cout<<"Enter the principle amount";
		std::cin>>p;
		std::cout<<"Enter the rate of interest";
		std::cin>>r;
	si=p*n*r/100;
		std::cout<<"Simple interest is"<<si;
	return 0;
}
