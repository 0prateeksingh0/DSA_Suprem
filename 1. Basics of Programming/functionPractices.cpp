#include<iostream>
using namespace std;

float circle_area(float r){
    float area = 3.14 * r * r;
    return area;
}

bool checkEven(int n){
    if(/*n % 2 == 0         //or*/ (n&1) == 0 ){
        return true;// its an even no;
    }
    else{
        return false;// its an odd no.
    }
}

long long int fact(long long int n){
    long long int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact * i;
    }
    return fact;
}

bool checkPrime(int n){
    int i=2;
    for(i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    
    //Write a Function to display the area of circcle
    // float r;
    // cout << "Enter the radius: " << endl;
    // cin >> r;
    // float area = circle_area(r);
    // cout << "Area of circle is " << area << endl;


    //Find the number is Even or Odd
    // int n;
    // cin >> n;
    // bool isEven = checkEven(n);
    // if(isEven){
    //     cout << n << " is Even number.\n"; 
    // }
    // else{
    //     cout << n << " is Odd number.\n";
    // }


    //Find the factorial
    // int n;
    // cin >> n;
    // long long int ans = fact(n);
    // cout << "Fcatorial of " << n << " is " << ans << endl;
    // to find out large factorial
    // we use long long here to store large number otherwise there is overflow


    //Check the given Number Prime or Not
    // int n;
    // cin >> n;
    // bool isPrime = checkPrime(n);
    // if(isPrime){
    //     cout<<"Prime\n";
    // }
    // else{
    //     cout<<"Not a Prime\n";
    // }

    //Print all prime of 1 to N
    int n;
    cin >>n;
    // 1 is non-prime number
    for(int i=2;i<=n;i++){
        bool isiPrime = checkPrime(i);
        if(isiPrime){
            cout <<i<<" ";
        }
    }
    
    return 0;
}