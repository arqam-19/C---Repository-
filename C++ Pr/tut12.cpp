#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b = &a;

    // &---> (adress of) / amoersand
    cout << "the adress of a is " << &a << endl;
    cout << "the adress of a is " << b << endl;

    // *---> (value at) / asterisk
    cout << "the value at address b is " << *b << endl;

    // POINTER TO POINTER 
    int** c=&b;
    cout<<"the address of b is "<<&a<<endl;
    cout<<"the address of b is "<<c<<endl;

    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}