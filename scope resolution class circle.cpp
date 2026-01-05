#include<iostream>
#define PI 3.142
using namespace std;
class circle{
	private:
		float area,circumference,rad;
		public:
			void getdata();
			void display();
};
void circle::getdata(){
	cin>>rad;
}
void circle::display(){
	area=PI*rad*rad;
	circumference=2*PI*rad;
	cout<<"AREA= "<<area<<"\n";
	cout<<"CIRCUMFERENCE= "<<circumference<<"\n";
}
int main(){
	circle c;
	c.getdata();
	c.display();
	return 0;
}
