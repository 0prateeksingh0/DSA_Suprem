#include<iostream>
using namespace std;

// function  declaration
int add(int x, int y );


// function  declare + define
int add(int x, int y ){ //int a, int b bhhi likh skta hn
    int result = x+y;      // result = a+b;
    return result;
}
int main(){

    //function call
    //printName();



    int a;
    cout << "Enter the value of a " << endl;
    cin >> a;
    int b;
    cout << "Enter the value of b " << endl;
    cin >>b;
    int sum = add(a,b);
    cout << "Addition result is " << sum << endl;

    return 0;

}









// declaration above krdo but define nicha krlo
//         or
// Function always used above the int main vala agr nicha likhoga uska function to 
//wo work nahi krga or jis kisi bhi funtion ka under ek function ko invok kr raha hu us function  hmasha uska upr hona chiya

