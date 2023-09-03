#include<iostream>
using namespace std;
int main(){

//Printing Solid Rectangle
//     //outer loop - row obeserve
//     for(int row =0; row<3; row=row+1){
//         for(int col =0; col<5; col=col+1){
//             //inner loop -col observe
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


//Square Pattern
//     int n;
//     cin >> n;
//     //outer loop
//     // row +=1 is same as row = row +1
//     for(int row =0; row<n; row=row+1){
//         //inner 
//         // col +=1 is same as col = col +1
//         for(int col =0; col<n; col=col+1){
//             cout << "*" ;
//         }
//         cout << endl;
//     }
// }


    //Hollow rectangle
    // for(int row=0; row<; row=row+1){
    //     //first row or last row -> print 5 *
    //     if(row == 0 || row == 2){
    //         for(int col=0;col<5; col=col+1){
    //             cout << "* ";
    //         }
    //     }
    //         else {
    //             //remaining middle rows
    //             cout << "* ";
    //             for(int i=0; i<3; i=i+1){
    //                 cout << "  ";
    //             }
    //             //last star
    //             cout <<"* ";
    //         }
    //         cout << endl;
    // }
//             OR
    // int rowCount, colCount;
    // cin >> rowCount >> colCount;
    // //Hollow rectangle
    // for(int row=0; row<rowCount; row=row+1){
    //     //first row or last row -> print 5 *
    //     if(row == 0 || row == rowCount-1){
    //         for(int col=0;col<colCount; col=col+1){
    //             cout << "* ";
    //         }
    //     }
    //         else {
    //             //remaining middle rows
    //             //first star
    //             cout << "* ";
    //             for(int i=0; i<colCount-2; i=i+1){
    //                 cout << "  ";
    //             }
    //             //last star
    //             cout <<"* ";
    //         }
    //         cout << endl;
    // }


    //Half Pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Inverted Half Pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //Numeric Half Pyramid
    //number of rows =n
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << col+1;
    //     }
    //     cout << endl;
    // }
    
    
    //Inverted Numeric Half Pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << col+1;
    //     }
    //     cout << endl;
    // }


    //Hollow Inverted Half Pyramid
    // int n;
    // cin >> n;
    // //Outrt Loop of row
    // for(int i=0; i<n; i++)
    // {
    //     //Inner loop of col
    //     for(int j=0; j<n; j++)
    //     {
    //         // col 0 & row 0 same and  col=n-row-1
    //         if( i == 0 || j == 0 || j==n-i-1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }


    //Full Pyramid
    // int n;
    // cin >> n;
    // for(int i=0;i<n;i++){
    //     int k=0;
    //     for(int j=0;j<((2*n)-1);j++){
    //         if(j<n-i-1){
    //             cout <<" ";
    //         }
    //         else if(k<2*i+1){
    //             cout << "*";
    //             k++;
    //         }else
    //         {
    //             cout <<" ";
    //         }
    //     }
    //     cout << endl;
    // }

    //Hollow Full Pyramid
    // int n;
    // cin >> n;
    // for(int i=0;i<n;i++){
    //     int k=0;
    //     for(int j=0;j<((2*n)-1);j++){
    //         if(j<n-i-1){
    //             cout <<" ";
    //         }
    //         else if(k<2*i+1){
    //             if(k==0 || k==2*i || i==n-1)
    //                 cout <<"*";
    //             else
    //                 cout <<" ";
    //             k++;
    //         }
    //     }
    //     cout << endl;
    // }

}

