#include <iostream>
using namespace std;

class student
{
   private:
   int marks;
   char grade;
   
   public:
    //NOTE: Constructor is a member function that is automatically executed when the object of class is created
   student(int m,char g)     //Constructor with parameter
   {
       marks=m;
       grade=g;
   }
   
   void show()
   {
       cout<<"Marks:"<<marks<<endl;
       cout<<"Grade:"<<grade<<endl;
   }
};

int main(){
    student s1(90,'A'),s2(75,'B');     //Value of parameters is entered here
    cout<<"Record of student 1:"<<endl;
    s1.show();
    cout<<"Record of student 2:"<<endl;
    s2.show();
}
