#include<iostream>

using namespace std;
int main(){
//______________________________________________
    /*Loops in C++:
    1.for loop
    2.while loop
    3.do-while loop */
//________________________________________________
    //  1. for loop
    //  syntax >> for(initialization;condition;updation)
    //  {
    //         loop body(C++ code;)
    // }

    // for(int i=1; i<=40; i++){

    //     cout<<i<<endl;
        
    // }

//______________________________________________
    // 2. while loop
    // syntax >> while(condition)
    // {
    //     C++ statement;
    // }


    //Printing 1 to 40 using while loop

    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

//______________________________________________
    // 3. do-while loop
    // syntax >> do {
    //     C++ statement;

    // }while condition;

    // 
    
//________________________________________________

// PRINT A TABLE OF 6 WITH THE HELP OF LOOPS

// 1.
    // int i =6;
    // while(i<=60){
    //     cout<<i<<endl;
    //     i=i+6;
    // }


// 2.
    // for(int i=7; i<=70; i=i+7){
    //     cout<<i<<endl;
    // }


// 3.
    int i=8;
    do{
        cout<<i<<endl;
        i=i+8;
    }while(i<=80);

    return 0;

    





}