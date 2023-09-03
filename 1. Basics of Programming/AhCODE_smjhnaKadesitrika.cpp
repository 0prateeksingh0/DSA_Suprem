//Desi tarika
#include<iostream>
using namespace std;

int getEvenSum(int n){
    cout << "inside getEvenSum function " << endl;
    cout << "Value of n is " << endl;
    int sum = 0;
    cout << "Initial value of sum is " << sum << endl;
    //for  Even always i=2
    for(int i=2; i<=n; i=i+2){
        cout << "for vallue of i:" << i << endl;
        sum = sum +i;
        cout << "sum now become: " << sum << endl;
    }
    cout << "returning sum = " << sum<< endl;
    return sum;
}

int main(){
    //Sum of Even N numbers
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    cout << "Callling getEvenSum function " << endl;
    int ans = getEvenSum(n);
    cout << "Even Sum is " << n << " is " << ans << endl;


    return 0;
}
