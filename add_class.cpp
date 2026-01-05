#include <iostream>
using namespace std;
 class sum{
 	public:
 		int summation(int x,int y);
 };
 
 sum::summation(int x,int y){
 	return x+y;
 } ;
 int main() {
 	sum s;
 	int a,b;
 	cout<<"Enter the numbers: ";
 	cin>>a>>b;
 	int ans=s.summation(a,b);
 	cout<<"The sum of a and b is "<<ans;
 	return 0;
 }
