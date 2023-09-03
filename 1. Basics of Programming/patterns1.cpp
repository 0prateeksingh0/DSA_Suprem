#include<iostream>
#include "assert.h"
using namespace std;
int main(){
    //Full Pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     //spaces
    //     for(int col=0; col<n-row-1; col=col+1){
    //         cout << " ";
    //     }
    //     //stars
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    //Inverted Full Pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     //spaces
    //     for(int col=0; col<row; col=col+1){
    //         cout << " ";
    //     }
    //     //stars
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //Solid Diamond
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     //spaces
    //     for(int col=0; col<n-row-1; col=col+1){
    //         cout << " ";
    //     }
    //     //stars
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for(int row=0; row<n; row=row+1)
    // {
    //     //spaces
    //     for(int col=0; col<row; col=col+1)
    //     {
    //         cout << " ";
    //     }
    //     //stars
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    //Hollow  Full Pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     //spaces
    //     for(int col=0;col<n-row-1; col=col+1){
    //         cout << " ";
    //     }
    //     //stars
    //     for(int col=0; col<2*row+1; col=col+1){
    //         //if first character or last character is star
    //         if(col==0){
    //             //first character
    //             cout << "*";
    //         }
    //         else if(col==2*row){
    //             //last character
    //             cout <<"*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int row=0; row<n; row=row+1){
    //     //spaces
    //     for(int col=0;col<row; col=col+1){
    //         cout << " ";
    //     }
    //     //stars
    //     for(int col=0; col<2*n-2*row-1; col=col+1){
    //         //if first character or last character is star
    //         if(col==0 || col==2*n-2*row-2){
    //             //first character & last character
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    
    //Flipped Solid Diamond
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     //half pyramid
    //     for(int col=0; col<n-row; col=col+1){
    //         cout <<"*";
    //     }
    //     //space wlaa full pyramid
    //     for(int col=0; col<2*row+1; col=col+1){
    //         cout <<" ";
    //     }
    //     //half pyramid
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    //     for(int row=0; row<n; row=row+1){
    //     //half pyramid
    //     for(int col =0; col<row+1; col=col+1){
    //         cout <<"*";
    //     }
    //     //space wlaa full pyramid
    //     for(int col=0; col<2*n-2*row-1; col=col+1){
    //         cout <<" ";
    //     }
    //     //half pyramid
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //Pattern 0
    // *
    // **
    // ***
    // ****
    // int n;
    // cin >> n;
    // for(int row=0; row<n ; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout <<"*";
    //     }
    //     cout << endl;
    // }


    //Pattern 1
    // ****
    // ***
    // **
    // *
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //Fancy Patter 2
    //1
    //22
    //333
    //4444
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << row+1;
    //     }
    //     cout << endl;
    // }


    //Pattern 3
    //4444
    //333
    //22
    //1
    // int n;
    // cin>> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << n-row;
    //     }
    //     cout << endl;
    // }

    //Fancy Patter 4
    //1
    //2*2
    //3*3*3
    //4*4*4*4
    //4*4*4*4
    //3*3*3
    //2*2
    //1
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << row+1;
    //         //not a last character cout 
    //         if(col != row)
    //             cout <<"*";
    //     }
    //     cout << endl;
    // }
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << n-row;
    //         if(col != n-row-1)
    //             cout << "*";
    //     }
    //     cout << endl;
    // }


    //Pattern 5
    //1
    //12
    //123
    //1234
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col< row+1; col= col+1){
    //         cout << col+1;
    //     }
    //     cout << endl;
    // }


    //Patter 6
    //1
    //121
    //12321
    //1234321
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     int col;
    //     for(col=0; col< row+1; col= col+1){
    //         cout << col+1;
    //     }
    //     col=col-1;

    //     //reverse counting printing
    //     for(; col>=1; col=col-1){
    //         cout<< col;
    //     }
    //     cout << endl;
    // }


    //Alphabet Palindrome Pyramid
    // A
    // A B C
    // A B C B A
    // A B C D C B A
    // A B C D E D C B A
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     int col;
    //     for(col=0; col< row+1; col= col+1){
    //         int ans = col+1;
    //         char ch = ans + 'A' - 1;
    //         cout << ch;
    //     }
    //     //reverse counting printing
    //     for(int col=row; col>=1; col=col-1){
    //         int ans = col;
    //         char ch = ans + 'A' -1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }


    //Hollow Inverted Half Pyramid
    //******
    //*   *
    //*  *
    //* *
    //**
    //*
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row ; col=col+1){
    //         if( row==0 || col == 0 || col == n-row-1){
    //             cout <<"*";
    //         }else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
        
    // }


    //Hollow half Pyramid
    //*
    //**
    //* *
    //****
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1)
    //     {
    //         if( col == 0 || row == n-1 || col == row )
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


    //Numeric Hollow Half Pyramid
    // 1
    // 1 2
    // 1   3
    // 1     4
    // 1 2 3 4 5
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1)
    //     {
    //         if( col == 0 || row == n-1 || col == row )
    //         {
    //             cout << col+1;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
            
    //     }
    //     cout << endl;
    // }


    //Hollow Inverted Half Pyramid
    // ****
    // * *
    // **
    // *
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row; col=col+1)
    //     {
    //         if( col == 0 || row == 0 ||col==n-row-1)
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


    //Numeric Hollow Inverted Hlaf Pyramid
    // 12345
    // 1  4
    // 1 3
    // 12
    // 1
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row; col=col+1)
    //     {
    //         if( col ==  || row == 0 ||col==n-row-1)
    //         {
    //             cout << col+1;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
            
    //     }
    //     cout << endl;
    // }

    //Numeric Full Pyramid
    //         1
    //       2 3 2
    //     3 4 5 4 3
    //   4 5 6 7 6 5 4
    // 5 6 7 8 9 8 7 6 5
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     //Spaces
    //     for(int col=0; col<n-row-1; col=col+1){
    //         cout << " ";
    //     }

    //     //Numbers
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << row+col+1 ;
    //     }

    //     //reverse counting
    //     int start= 2*row;
    //     for(int col=0; col<row;  col=col+1){
    //         cout << start;
    //         start = start -1;

    //     }


    //     cout << endl;
    // }

    // for(int row=0; row<n; row=row+1){
    //     //row+1 elemets print krne wale hai
    //     int start = row+1;
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << start << " ";
    //         start = start +1;
    //         //         or
    //         // cout << row+ col + 1 << " "; 
    //     }
    //     cout << endl;
    //}


    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row=row+1){
    //     //row+1 elemets print krne wale hai
    //     int start = row+1;
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << start << " ";
    //         start = start +1;
    //         //         or
    //         // cout << row+ col + 1 << " "; 
    //     }
    //     cout << endl;
    // }

    //Numeric Hollow Pyramid
    //    1
    //   1 2
    //  1   3
    // 1     4
    //1 2 3 4 5
    // int n;
    // cin >>n;
    // for(int row=0; row<n; row=row+1){
    //     //Spaces
    //     for(int col=0; col<n-row-1; col=col+1){
    //         cout << " ";
    //     }

    //     //numbers with spaces in between
    //     int start = 1;
    //     for(int col=0; col<2*row+1; col=col+1){
    //         //first row or last row
    //         if( row == 0 || row == n-1){
    //             if( col %2 ==0){
    //                 //even
    //                 cout << start;
    //                 start = start+1;
    //             }
    //             else {
    //                 //odd
    //                 cout << " ";
    //             }
    //         }
    //         else {
    //             //first col
    //             if(col == 0){
    //                 cout << 1;
    //             }
    //             else if( col == 2*row+1-1){
    //                 cout << row+1;
    //             }
    //             else {
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    //Numeric Hollow Inverted Half Pyramid
    // 12345
    // 2345
    // 345
    // 45
    // 5
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     for(int col=row+1; col<=n; col++){
    //         cout << col;
    //     }
    //     cout << endl;
    // }


    //Numeric Hollow Inverted Half Pyramid
    // 1 2 3 4 5
    // 2     5
    // 3   5
    // 4  5
    // 5
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     for(int col=row+1; col<=n; col++){
    //         if(col == row+1 || col == n || row==0){
    //             cout << col;
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //Numeric Palindrome Equilateral Pyramid
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
    // int n;
    // cin >>n;
    // int k=n;
    // for(int i=0; i<n; i++){
    //     //Inner loop
    //     int c=1;
    //     for(int j=0; j<k; j++){
    //         if(j<n-i-1){
    //             cout << " ";
    //         }
    //         else if(j<=n-1){
    //             cout <<c;
    //             c++;
    //         }
    //         else if(j == n){
    //             c=c-2;
    //             cout << c;
    //             c--;
    //         }
    //         else{
    //             cout << c;
    //             c--;
    //         }
            
    //     }
    //     k++;
    //     cout << endl;
    // }


    //Solid Half Diamond
    // *
    // **
    // ***
    // ****
    // ****
    // ***
    // **
    // *
    // int n;
    // cin >> n;
    // for(int row=0; row<n ; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout <<"*";
    //     }
    //     cout << endl;
    // }
    // for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //Fancy Pattern #1
    // ********1********
    // *******2*2*******
    // ******3*3*3******
    // *****4*4*4*4*****
    // ***5*5*5*5*5*5***
    // int n;
    // cin >> n;
    // /*if(n>9){
    //     cout<<"Please put value <=9.\n";
    //     return 0;
    // }*/
    // assert(n<=9);
    // for(int i=0; i<n; i++){
    //     int start_num_index =8-i;
    //     int num = i+1;
    //     int count_num = num;
    //     for(int j=0; j<17; j++){
    //         if(j==start_num_index && count_num > 0){
    //             cout <<num;
    //             start_num_index+=2;// Har 6*6 2index bad print hua na
    //             count_num--;
    //         }
    //         else{
    //             cout <<"*";
    //         }
    //     }
    //     cout << endl;
    // }


    //Fancy Pattern #2
    // *
    // * 1 *
    // * 1 2 1*
    // * 1 2 3 2 1*
    // * 1 2 3 2 1*
    // * 1 2 1*
    // * 1 *
    // *
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int cond = i<=n/2 ? 2*i : 2*(n-i-1);
    //     for(int j=0; j<=cond; j++){
    //         if(j<=cond/2){
    //             cout<<j+1;
    //         }
    //         else{
    //             cout<<cond-j+1;
    //         }
    //     }
    //     cout <<endl;
    // }

    //Fancy Pattern #2
    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10
    // 7*8*9*10
    // 4*5*6
    // 2*3
    // 1
    // int n;
    // cin >>n;
    // int c=1;
    // for(int i=0; i<n; i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<c;
    //         c++;
    //         if(j<i){
    //             cout<<"*";
    //         }
    //     }
    //     cout << endl;
    // }
    // //cout<<"C: "<<c<<endl;
    // int start=c-n;
    // for(int i=0; i<n; i++){
    //     int k=start;
    //     for(int j=0; j<=n-i-1; j++){
    //         cout<<k;
    //         k++;
    //         if(j<n-i-1){
    //             cout<<"*";
    //         }
    //     }
    //     start=start-(n-i-1);
    //     cout << endl;
    // }


    // Floyd's Traingle Pattern
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21
    // 22 23 24 25 26 27 28 29
    // int n;
    // cin>>n;
    // int c=1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<c<<" ";
    //         c++;
    //     }
    //     cout<< endl;
    // }


    //Pascal's Triangle Pattern
    //  1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    // 1 5 10 10 5 1
    // 1 6 15 20 15 6 1
    // int n;
    // cin>>n;
    // int c=1;
    // for(int i=1; i<=n; i++){
    //     int c=1;
    //     for(int j=1; j<=i; j++){
    //         cout<<c<<" ";
    //         c = c* (i -j) / j;
    //     }
    //     cout<< endl;
    // }


    //Butterfly Pattern
    // *                      *
    // * *                  * *
    // * * *              * * *
    // * * * *          * * * *
    // * * * * *      * * * * *
    // * * * * * *  * * * * * *
    // * * * * * *  * * * * * *
    // * * * * *      * * * * *
    // * * * *          * * * *
    // * * *              * * *
    // * *                  * *
    // *                      *
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        int cond = i<n ? i : n+(n-i-1);
        int space_count = i<n ? 2*(n-cond-1): i-cond-1;
        for(int j=0;j<2*n;j++){
            if(j<=cond){
                cout <<"*";
            }
            else if(space_count >0){
                cout <<" ";
                space_count--;
            }
            else{
                cout<<"*";
            }
        }
        cout << endl;
    }


    return 0;

}