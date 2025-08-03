#include<iostream>

using namespace std;

int main(){

    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;

    //***** Selection control structure: If else ladder
    // if((age<18) && (age>0)) {
    //     cout<<"you can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are a kid "<<endl;
    // }
    // else
    //     cout<<"you can come to the party"<<endl;

    //***** Selection control structure: switch case
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;
    case 22:
        cout<<"you are 22";
        break;
    case 2:
        cout<<"you are 2";
        break;
    
    
    default:
    cout<<"no special cases"<<endl;
        break;
    }

    

    return 0;
}       
