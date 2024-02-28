#include<iostream>
using namespace std;
void exchange(int *m,int *n);    //Function definition

int main(){
	int a,b;
	cout<<"Enter 2 integers:"<<endl;
	cin>>a>>b;
	
	cout<<"Values before swaping:"<<endl;
	cout<<"Number 1:"<<a<<endl;
	cout<<"Number 2:"<<b<<endl;
	
	exchange(&a,&b);     //Function call
	cout<<"Vales after swaping:"<<endl;
	cout<<"Number 1:"<<a<<endl;
	cout<<"Number 2:"<<b<<endl;
	}
	
	void exchange(int *m,int *n)   //Function initialization
	{
		int temp=*m;
		*m=*n;
		*n=temp;
	}
	

