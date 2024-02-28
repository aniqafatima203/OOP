#include<iostream>
#include<stdio.h>

using namespace std;

class result
{
    private:
    int rno,marks[3];
    char name[50];
    
    public:
    void input()
    {
        cout<<"Enter your roll no:";
        cin>>rno;
		cout<<"Enter your name:";
        cin>>name;
        for(int i=1;i<=3;i++)
        {
            cout<<"Enter marks of 3 subjects:";
            cin>>marks[i];
        }
    }
    
    void show()
    {
        cout<<"Your roll no. is :"<<rno<<endl;
        cout<<"Your name is:"<<name<<endl;
        for(int i=1;i<=3;i++)
        cout<<"Your marks for 3 subjects are :"<<marks[i]<<endl;
    }
    
    int total()
    {
        int t=0;
		for(int i=1;i<=3;i++)
        t=t+marks[i];
        return t;
    }
    
    float average()
    {
        int t=0;
        for(int i=1;i<=3;i++)
        t=t+marks[i];
        return t/3.0;
    }
};

int main(){
    result obj;
    obj.input();
    obj.show();
    cout<<"Total marks :"<<obj.total()<<endl;
    cout<<"Average:"<<obj.average()<<endl;
}
