#include<iostream>
using namespace std;
int main(){
    int val;
    cout << "Enter the value " << endl;
    cin >> val;

    switch (val)
    {
    case 1: cout << "Love";
        break;
    case 2: cout << "Babbar";
        break;
    case 3: cout << "Jai Shree Ram";
        break;
    case 4: cout << "Prateek";
        break;
    default: cout << "Radhe Radhe";
    }

}
// if we don't add break after the case the it print Love to and if case 2 have break the 
// Love Babbar 
// and if we remove all the break then it print everything + Radhe Radhe
// Can we use Continue in Switch Case