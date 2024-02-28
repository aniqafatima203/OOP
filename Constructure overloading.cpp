#include <iostream>
using namespace std;

class over
{
   private:
   int num;
   char ch;
//Constructor overloading is a process of declaring multiple constructors with differenet parameters
   public:
   over()          //Constructor 
   {
       num=0;
       ch='x';
   }
   
   over(int a,char b)      //Constructor overloading 
   {
      num=a;
      ch=b;
   }
   
   void show()
   {
       cout<<"Number:"<<num<<endl;
	   cout<<"Character:"<<ch<<endl;
   }
};

int main(){
    over obj1,obj2(100,'p');
    cout<<"The content of first:"<<endl;
    obj1.show();
    cout<<"The content of second:"<<endl;
    obj2.show();
    
}
