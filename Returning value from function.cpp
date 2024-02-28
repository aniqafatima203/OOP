#include <iostream>
using namespace std;

char marks(int a);
int main() {
    int m;
    char g;
    cout<<"Enter your marks:"<<endl;
    cin>>m;
   g=marks(m);
   cout<<"Your grade is "<<g;
}

char marks(int a){
    if(a>=80)
    return 'A';
    else if(a>=60)
    return 'B';
    else if(a>=40)
    return 'C';
    else
    return 'F';
}
