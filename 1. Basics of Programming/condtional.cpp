// #include<iostream>
// using namespace std;
// int main(){
//     //declare a integer type variables
//     int score;
//     //print Enter the score
//     cout << "Enter the score " << endl;
//     //take input into score variable
//     cin >> score;
//     //if condition
//     if(score < 300){
//         cout << "India wins" << endl;
//     }
//     else {
//         cout << "pak wins" << endl;
//     }
    
// }


//nested if-else
#include<iostream>
using namespace std;
int main(){
    int marks;
    cin >> marks;

    if(marks >=90){
        cout << " A Grade";
    }
    else{
        if(marks >= 80){
            cout << "B Grade";
        }else{
            if (marks >=60)
            {
                cout << "C Grade";
            }else{
                if(marks >=40){
                    cout << "D Grade";
                }else{
                    cout << "F Grade";
                }
            }
            
        }
    }
}
// if-elseif-else
if(marks >=90){
    cout << "A";
}
else if (marks >= 80){
    cout << "B";
}
else if(marks >=60){
    cout << "C";
}
else if(marks >=40){
    cout << "D";
}
else{
    cout << "F";
}