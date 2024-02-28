#include<iostream>
using namespace std;
class book
{
    private:
    int bookid,pages;
    float price;
    public:
    void get()
    {
        cout<<"Enter bookID:";
        cin>>bookid;
        cout<<"Enter pages of book:";
        cin>>pages;
        cout<<"Enter price of book:";
        cin>>price;
    }
    void show()
    {
        cout<<"BookID:"<<bookid<<endl;
        cout<<"Pages of book:"<<pages<<endl;
        cout<<"Price of book:"<<price<<endl;
	}
    void set(int id,int pg,float pr)
    {
        bookid=id;
        pages=pg;
        price=pr;
    }
    float getprice()
    {
        return price;
    }
};
int main(){
    book obj1,obj2;
    obj1.get();
    obj2.set(2,320,150.75);
    cout<<"The detail of most costly book is as follow:"<<endl;
    if(obj1.getprice()>obj2.getprice())
    obj1.show();
    else
    obj2.show();
}
