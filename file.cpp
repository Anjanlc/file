#include <iostream>
using namespace std;

class demo{
    private:
        int a ,b ;
    public:
        void getdata();
        void putdata();


};

 void demo::getdata(){
     cout<<"enter the first number"<<endl;
     cin>>a;
     cout<<"enter the second number"<<endl;
     cin>>b;
 }

 void demo::putdata(){
     cout<<"the entered first and second number are :"<<a<<b<<endl;
 }

int main()
{
    cout << "hello there" << endl;

    

    return 0;
}