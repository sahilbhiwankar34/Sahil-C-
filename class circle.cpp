#include<iostream>
#define PI 3.142
using namespace std;
class circle{
	private:
		float area,circumference,radius;
		public:
			void getdata(){
				cout<<"Enter the radius of circle: ";
				cin>>radius;
			}
			void display(){
				cout<<"The area and circumference of circle is: "<<"\n";
				area=PI*radius*radius;
				circumference=2*PI*radius;
				cout<<"Area= "<<area<<"\n";
				cout<<"Circumference= "<<circumference<<"\n";
				
			}
};
int main(){
	circle c;
	c.getdata();
	c.display();
	return 0;
}
