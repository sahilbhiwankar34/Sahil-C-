#include<iostream>
using namespace std;
class average{
	private:
		int a,b,c;
		float avg;
		public:
			void average_val();
			void result();
};
void average::average_val(){
	cout<<"\t\t\t\t\tAVERAGE OF THREE NUMBERS\t\t\t\t\t\n";
	cout<<"Enter the three numbers: \n";
	cin>>a>>b>>c;
}
void average::result(){
	avg=a+b+c/3;
	cout<<"The average of the numbers "<< a<<" "<<b<<" "<<c<<" is "<< avg;
}
int main(){
	average avd;
	avd.average_val();
	avd.result();
	return 0;
}
