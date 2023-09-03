#include<iostream>
using namespace std;

int raja = 420;// Global varoable which u can used anywhere

int main(){
    
    //Variable Scoping

    //decalaration
    int a;
    //initialization
    int b = 5;
    //updation
    b = 10;
    cout << raja << endl;

    // int b =12 we can't redefined same variable we can just update it only

    if(true) {
        int b = 15;
        int raja = 421;

        cout << b << endl;  //15
        cout << raja << endl;
    }
    cout << b << endl;      //10

    
}