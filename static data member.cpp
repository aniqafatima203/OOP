#include<iostream>
using namespace std;

class student
{
	private:
		static int r;    //Static data member that shared amoung all object of class 
		int rno,marks;
		char name[50];
		
	public:
		student()
		{
			r++;
			rno=r;
		}
		
		void in()
		{
			cout<<"Enter name:";
			gets(name);
			cout<<"Enter marks:";
			cin>>marks;
		}
		
		void show()
		{
			cout<<"Roll no.:"<<rno<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Marks:"<<marks<<endl;
		}		
};

int student ::r=0;   //Static data members initialize outside the class 
int main(){
	student s1,s2,s3;
	s1.in();
	s2.in();
	s3.in();
	s1.show();
	s2.show();
	s3.show();
	
	return 0;
}
