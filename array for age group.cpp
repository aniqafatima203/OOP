#include<iostream>

using namespace std;

int main(){
	
	int age[150];
	int n,count=0;
	cout<<"Enter the number of person required:";
	cin>>n;
	cout<<"Enter the age of "<<n<<"persons:"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>age[i];
		if(age[i]>=50&&age[i]<=60)
		count=count+1;
	}
	cout<<"The persons between 50 to 60 age group are "<<count;
	
	return 0;
}
