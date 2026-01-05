#include<iostream>
using namespace std;
class evenodd{
	private:
		int n;
		public:
			void getdata(){
				cout<<"\t\t\t\t\t**********EVENODD CHECKER**********\t\t\t\t\t";
				cout<<"\nEnter the number to check: ";
				cin>>n;
			}
			void display(){
				cout<<"The number "<<n<<" is : ";
				if(n%2==0){
					cout<<"EVEN";
				}
				else{
					cout<<"ODD";
				}
			}
};
int main(){
	evenodd eo;
	eo.getdata();
	eo.display();
	return 0;
}
