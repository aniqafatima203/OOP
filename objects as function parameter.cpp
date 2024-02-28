#include<iostream>
using namespace std;

class travel
{
    private:
    int km,hr;
    
    public:
    travel()
    {
        km=hr=0;
    }
    
    void get()
    {
        cout<<"Enter kilometers traveled:";
        cin>>km;
        cout<<"Enter hours traveled:";
        cin>>hr;
    }
    
    void show()
    {
        cout<<"You traveled "<<km<<" kilometers in "<<hr<<" hours "<<endl;
    }
    
    travel add(travel p)    //We create an object as parameter
    {
        travel t;        //We create an object even in an member function
        t.km=km+p.km;    //Here we add the values of both objects
        t.hr=hr+p.hr;
       return t;      //Return an object from member function
    }
};

int main(){
    travel obj1,obj2,r;
    obj1.get();
    obj1.show();
    obj2.get();
    obj2.show();
    r=obj1.add(obj2);
    cout<<"Total traveling is as follow:"<<endl;
    r.show();
}
