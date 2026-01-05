#include<iostream>
using namespace std;
class aritmetic{
	private:
		int a,b,add,mul,sub,div,mod;
		public:
			void getdata(){
				cout<<"&*%^Simple Calculator&*%^\n";
				cout<<"Enter the number(value of b): "<<"\n";
				cin>>b;
			
			}
			void display(){
				for(a=1;a<5;a++){
				add=a+b;
				sub=a-b;
				mul=a*b;
				div=a/b;
				mod=a%b;
				cout<<"The addition is: "<<add<<"\n";
				cout<<"The subtraction is: "<<sub<<"\n";
				cout<<"The multiplication is: "<<mul<<"\n";
				cout<<"The division is: "<<div<<"\n";
				cout<<"The modulo is: "<<mod<<"\n";
				}
			}
};
int main(){
	aritmetic ar;
	ar.getdata();
	ar.display();
	return 0;
}
