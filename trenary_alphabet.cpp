#include<iostream>
using namespace std;
int main() {
char c;
	cin>>c;
	(c>='a'&& c<='z' || c>='A'&&c<='Z')?cout<<"alphabet":cout<<"not alphabet";
	return 0;
}
