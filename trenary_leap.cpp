#include<iostream>
using namespace std;
int main() {
	int year;
	cin>>year;
	(year%400==0)?((year%4==0)?cout<<"leap year":cout<<"leap"):
		((year%100==0)?cout<<"not leap":cout<<"not leap");
			return 0;
}
