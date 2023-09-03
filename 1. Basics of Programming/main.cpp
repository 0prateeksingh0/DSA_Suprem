#include<iostream>
using namespace std;
int main(){
    //Count number from 1 to n.
    int n;
    cin >> n;
    for(int i=0; i<=n;i=i+1){
        cout <<i;
    }


    //Check wheather the number is prime or not
    int n;
    cin >> n;
    for(int i=2;i<n;i=i+1){
        if(n%i==0){
            cout << "Not Prime";
            return 0;
        }
    }
    cout <<" Prime";


    //Print table of n number
    int n;
    cin >> n;
    for(int i=0; i<=n;i=i+1){
        cout << n*i ;
    }

}