#include <iostream>
using namespace std;
//NOTE: Destructor is same as constructor but it is executed when an object of that class is destroyed
class test
{
    private:
    int n;
    
    public:
    test()     //We use Constructor here
    {
        cout<<"Object created"<<endl;
    }
    
    ~test()   //We use destructor here
    {
        cout<<"Object destroyed"<<endl;
    }
};

int main(){
    test obj1,obj2;
}
