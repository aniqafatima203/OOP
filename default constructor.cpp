#include <iostream>
using namespace std;
//NOTE: Default copy constructor is used to initialize an object with another object of the same type
class book
{
    private:
    int pg,pr;
    char title[50];
    
    public:
    void get()
    {
        cout<<"Enter title:";
        gets(title);
        cout<<"Enter pages:";
        cin>>pg;
        cout<<"Enter price:";
        cin>>pr;
    }
    
    void show()
    {
        cout<<"Title:"<<title<<endl;
        cout<<"Page:"<<pg<<endl;
        cout<<"Price"<<pr<<endl; 
	}
};

int main(){
    book obj1;;
    obj1.get();
    book obj2=obj1;     //Declare object using default copy constructor,obj2 & obj3 is initialize to obj1
    book obj3=obj1;
    cout<<"\n The detail of b1:"<<endl;
    obj1.show();
    cout<<"\n The detail of b2:"<<endl;
    obj2.show();
    cout<<"\n The detail of b3:"<<endl;
    obj3.show();
}
         
