#include<iostream>
using namespace std;

void printName() {
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "babbar" << endl;
    }
}

void printNumber(int num){
    cout << num << endl;
}

// function  declare + define
int add(int x, int y );

int findMax(int num1,  int num2, int num3){
    if(num1 > num2  && num1 > num3){
        return num1;
    }else if(num2 > num1 && num2 > num3){
        return num2;
    }
    else {
        return num3;
    }
}

// n is a parameter
void printCounting(int n){
    for(int i=0; i<n; i++){
        cout << i << " ";
    }
    cout << endl;
}

char getGrade(int marks){
    // if(marks >= 90)
    //     return 'A';
    // else if(marks >= 80)
    //     return 'B';
    // else if(marks >= 70)
    //     return 'C';
    // else if(marks >= 60)
    //     return 'D';
    // else
    //     return 'E';

    //assuming marks is between 0 to 100
    switch(marks/10){
        case 10:
        case 9 : return 'A'; break;
        case 8 : return 'B'; break;
        case 7 : return 'C'; break;
        case 6 : return 'D'; break;
        default:  return 'E';
    }
}

int getSum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum+i;
    }
    return sum;
}

int getEvenSum(int n){
    int sum = 0;
    // Even i=2
    for(int i=2; i<=n; i=i+2){
        sum = sum +i;
    }
    return sum;
}

int main(){

    //function call
    //printName();


    // int a = 5;
    // cout << "Address of a is: " << &a << endl;
    // printNumber(a);


    //Write a function to add 2 numbers
    // int a;
    // cout << "Enter the value of a " << endl;
    // cin >> a;
    // int b;
    // cout << "Enter the value of b " << endl;
    // cin >>b;
    // int sum = add(a,b);
    // cout << "Addition result is " << sum << endl;



    //Find max of 3 numbers
    // int a,b,c;
    // cin >> a >> b >>c;
    // int maximumNumber = findMax(a,b,c);
    // cout << maximumNumber << endl;


    //Counting from 1 to n
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;

    // n is arrgument
    // printCounting(n);


    //Write a function of Students & Grade
    // int marks;
    // cout << "Enter the marks: " << endl;
    // cin >> marks;
    // char finalGrade = getGrade(marks);
    // cout << finalGrade << endl;

    // for(int i=0; i<=100; i++){
    //     char ans = getGrade(i);
    //     cout << "Grade for marks = " << i << " is " << ans << endl;
    // }


    //Sum of  N numbers
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // int ans = getSum(n);
    // cout << "Sum upto " << n << " is " << ans << endl;


    //Sum of Even N numbers
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    int ans = getEvenSum(n);
    cout << "Even Sum is " << n << " is " << ans << endl;


    return 0;

}

int add(int x, int y){
    int result = x+y;
    return  result;
    //     or
    //return x+y;
 }


// Function always used above the int main vala agr nicha likhoga uska function to 
//wo work nahi krga or jis kisi bhi funtion ka under ek function ko invok kr raha hu us function  hmasha uska upr hona chiya


// Pass by value -> copy create krta hn 

// &a -> is use to found out the memory address of variable which is given in hexadecimal
// &_