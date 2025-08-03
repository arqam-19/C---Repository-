 
#include<iostream>
using namespace std;
int glo=9;
void sum(){
    int a;
    cout<< glo;
}
int main(){
    int glo=8;
    glo=9;
    int a=4,b=4;
    float pi=3.14;
    char c='d';
    sum();
    cout<<glo;
    return 0;
}