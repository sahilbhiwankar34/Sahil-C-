#include<iostream>
using namespace std;
int main() {
	char a;
	cout<<"Enter the character: ";
	cin>>a;
	if(a>='a' && a<='z'|| a>='A'&&a<='Z'){
		cout<<"alphabet";
	}
	else{
		cout<<"not alphabet";
	}
	return 0;
}