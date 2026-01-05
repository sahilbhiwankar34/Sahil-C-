#include<iostream>
using namespace std;
class marksheet{
	private:
	   float phy,chem,eng,math,Egd,crm;
		float per;
		public:
			void getdata(){
				cout<<"\t\t\t\t\t**********MARKSHEET ANALYSIS**********\t\t\t\t\t";
				cout<<"\nEnter the marks of student: ";
				cin>>phy>>chem>>eng>>math>>Egd>>crm;
			}
			void display(){
				cout<<"Physics: "<<phy<<"\n";
				cout<<"Chemistry: "<<chem<<"\n";
				cout<<"English: "<<eng<<"\n";
				cout<<"Maths: "<<math<<"\n";
				cout<<"Engineering Graphics: "<<Egd<<"\n";
				cout<<"CRM: "<<crm<<"\n";
				
				per=phy+chem+eng+math+Egd+crm/6.00;
				cout<<"Percentage= "<<per<<"\n";
				if(per<0){
					cout<<"The student is failed in examination: "<<"\n";
				}
				else if(per>0 ||per<=40){
					cout<<"The student is passed on boundary "<<"\n";
				}
				else if(per>40 || per<=75){
					cout<<"The student is passed the examination!"<<"\n";
				}
				else if(per>75 || per<=90){
					cout<<"The student is passed with good marks in examination"<<"\n";
				}
				else if(per>90 || per<=100){
					cout<<"The students is in merit list"<<"\n";
				}
				else{
					cout<<"student is failed"<<"\n";
				}
				
				float cgpa=per/9.5;
				cout<<"The total cgpa of student is: "<<cgpa<<"\n";
			}
				
};
int main(){
	marksheet m;
	m.getdata();
	m.display();
	return 0;
}
