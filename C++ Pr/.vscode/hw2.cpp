#include<iostream>
using namespace std;

int main(){
    int pass,pin;
    cout<<"enter your password "<<endl;
    cin>>pass;

    cout<<"enter your pin"<<endl;
    cin>> pin;

    if(pass==5678 || pin==1234){

        cout<<"Access Granted"<<endl;

    }
    else{
        cout<<"Access Denied"<<endl;
    }

}