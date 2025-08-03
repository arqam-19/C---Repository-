#include<iostream>
#include<iomanip>

using namespace std;

int main(){


    // int a=34;
    // cout<<"the value of c was:"<<a<<endl;
    // a=45;
    // cout<<"the value of a was:" <<a;

    // ****  Constant in C++ *****

    // const int a=3;
    // cout<<"the value of a is:"<<a<<endl;
    // a=45.6;  // this rais error becoz a is contant
    // cout<<"the value of a is:"<<a<<endl:

    // ******  Mnaipulators in c++ *******

    // int a=35, b=78, c=1233;
    // cout<<"the value of a  is:"<<setw(4) <<a<<endl;
    // cout<<"the value of b  is:"<<setw(100) <<b<<endl;
    // cout<<"the value of c  is:"<<setw(4) <<c<<endl; 

    // cout<<"the value of a wwithout setw is:"<<a<<endl;
    // cout<<"the value of b wwithout setw is:"<<b<<endl;
    // cout<<"the value of c wwithout setw is:"<<c<<endl;


    // ****** Operator Precedence
    int a=3, b=4;
    int  c= ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;

    
    
}