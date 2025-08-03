#include<iostream>
using namespace std;
int main(){
    int marks[] = {23, 45, 56, 98};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;

    // you can change the value of any array
     marks[2]= 599;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int  i = 0; i < 4; i++)
    // {
    //     cout<<"the value of marks " << i <<" is "<<marks[i]<<endl;

    // }
    // Pointers and Arrays
    int* p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    // cout<<"the value of marks[0] is"<<*p<<endl;
    // cout<<"the value of marks[1] is"<<*(p+1)<<endl;
    // cout<<"the value of marks[2] is"<<*(p+2)<<endl;
    // cout<<"the value of marks[3] is"<<*(p+3)<<endl;
    
    return 0;
}