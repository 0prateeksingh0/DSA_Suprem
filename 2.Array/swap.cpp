//3 methods to implement swapping
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    //1st method
    // a=a+b;
    // b=a-b;
    // a=a-b;


    //2nd method
    // temp=a;
    // a=b;
    // b=temp;

    //3rd method by XOR
    a=a^b;
    b=a^b;
    a=a^b;
    
    cout<<"Swapped values"<<endl;
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    return 0;

}

