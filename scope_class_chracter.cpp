#include<iostream>
using namespace std;
class character{
	private:
		char ch;
		public:
			void getcharacter();
			void answer();
};
void character::getcharacter(){
	cout<<"\t\t\t\t\tCHARACTER CHECKER\t\t\t\t\t\n";
	cout<<"Enter the character: ";
	cin>>ch;
}
void character::answer(){
	if(ch>='a'&& ch<='z'){
		cout<<"The character "<<ch<<" is lowercase";
	}
	else if(ch>='A'&& ch<='Z'){
		cout<<"The character "<<ch<<" is uppercase";
	}
	else if(ch>='0'&& ch<='9'){
		cout<<"The character "<<ch<<" is digit";
	}
	else{
		cout<<"The character "<<ch<<" is special character";
	}
}
int main(){
	character c;
	c.getcharacter();
	c.answer();
	return 0;
}
