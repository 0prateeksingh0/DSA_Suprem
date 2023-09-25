#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void inc(int arr[], int size){
    arr[0] = arr[0]+10;
    printArray(arr, size);
}

int main(){

    // array declare
    // int arr[7];
    // cout << arr <<endl;  // base address print
    // cout << &arr << endl;//base address print
    // cout<<"Array created sucessfully"<<endl;


    // Question 1. int array -> 53 size , char array -> 106 size , bool array -> 23  size
    // int a[53];
    // char a[106];
    // bool a[23];
    
    
    //initialisation
    // int arr[]={2,4,6,9,12};
    // int brr[5]={2,4,6,9,12};
    // int crr[10]={2,4,6,9,12};
    // // error
    // // int drr[4]={2,7,9,10,14,20};// too many initializers for 'int [4]'
    // cout<<"Array created sucessfully"<<endl;

    // index and access in Array
    // int arr[] = {1,3,5,7,9};
    // cout << arr[4] << endl;

    // //printing all values
    // for(int index=0; index<5; index++){
    //     cout << arr[index]<< " ";
    // }


    //taking input elements un array
    //int n; cin >> n; int arr[n];  bad practice

    //static array
    // int arr[10];
    // cout << "Enter the elements of array: " << endl;
    // // Taking input in array
    // for(int i=0; i<10; i++){
    //     //int n; cin >> n; arr[i]=n;
    //     cin >> arr[i];
    // }
    // //printing 
    // cout << "Printing the  values in array: " << endl;
    // for(int i=0; i<10; i++){
    //     cout << arr[i]<< " ";
    // }


    //Initialising Array:
    // Q1. Take 5 elements i/p in array & print their doubles
    // int arr[500];
    // int n;
    // cout << "Enter the number you want to add in the array: "<< endl;
    // cin>>n;
    // cout << "Enter the number: " << endl;
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // //print doubles
    // cout << "Doubles: ";
    // for(int i=0; i<n; i++){
    //     cout << 2*arr[i]<< " " ;
    // }

    // Q2. Given arr[] = {1,3,5,7,9}  and print arr[] ={1,1,1,1,1}
    // int arr[]={1,3,5,7,9};

    // In the remaining space it filled 0
    // int arr[10]={1,2};
    // for(int i=0; i<10; i++){
    //     cout << arr[i]<<" ";
    // }
    // Here it print garbage value or any random value
    // int arr[10];
    // for(int i=0; i<10; i++){
    //     cout << arr[i]<<" ";
    // }

    // Initialising whole array by 0 it print 10 times 0's and if 
    // we int arr[10]={1} the it zero index have 1 and reaming 9 spaces 0's ->1 0 0 0 0 0 0 0 0 
    // int arr[10]={0};
    // for(int i=0; i<10; i++){
    //     cout << arr[i]<<" ";
    // }

    // Pass by reference : array-> function -> address -> main copy pass nahi ki
    // |_> actual array me updation kar raha ho
    // int arr[]={5,6};
    // int size=2;
    // inc(arr, size);
    // printArray(arr, size);

    
    //Linear search
    // int arr[]={1,2,3,4,5,6,7,8};
    // int size=8;
    // int key=9;

    // bool flag=0;
    // // 0-> not found
    // // 1-> found
    // for(int i=0; i<size; i++){
    //     if(arr[i]==key){
    //         //found
    //         flag=1;
    //     }
    // }
    // if(flag)
    //     cout << "Present" << endl;
    // else
    //     cout << "Absent" << endl;
    

    //Count the 0's and 1's in Array    
    // int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1,2,4,5,7};
    // int size =19;

    // int numZero=0;
    // int numeOne=0;

    // for(int i=0; i<size; i++){
    //     //if zero found, incremenet numZero
    //     if(arr[i] == 0){
    //         numZero++;
    //     }
    //     //if One found, increment numOne
    //     if(arr[i] == 1){
    //         numeOne++;
    //     }
    // }
    // cout <<"number of zeroes "<< numZero<< endl;
    // cout <<"number of ones "<< numeOne << endl;


    


    //Maximum Number in an Array
    // int arr[]= {2,4,6,1,3,7,9,12,56,43,21};
    // int size =11;
    // //Initialise the maxi variable wth the 
    // //maximum possible integere value
    // int maxi = INT_MIN;

    // for(int i=0; i<size; i++){
    //     if(arr[i]> maxi){
    //         //found a number greater than maxi , update maxi
    //         maxi = arr[i];
    //     }
    // }
    // cout << "maximum number is: " << maxi << endl;

    // int arr[]= {2,4,6,3,1,7,9,12,56,43,21,22};
    // int size=12;
    // int mini=INT16_MAX;
    // for(int i=0; i< size; i++){
    //     if(arr[i]< mini){
    //         mini = arr[i];
    //     }
    // }
    // cout << "minimum number is: "<< mini << endl;


    //Exterem
    // int arr[8]={10,20,30,40,50,60,70};
    // int size=7;

    // int start =0;
    // int end = size-1;

    // while(start <= end) {
    //     if(start > end)
    //         break;

    //     if(start == end ){
    //         cout << arr[start]<<" ";
    //     }
    //     else {
    //         cout << arr[start] <<" ";
    //         cout << arr[end] << " ";
    //     }
    //     start++;
    //     end--;
    //}
    
    
    // Reverse the array
    int arr[8]={10,20,30,40,50,60,70};
    int size=7;
    int start =0;
    int end = size-1;
    while(start<=end){
        //step1:
        swap(arr[start], arr[end]);
        //step2:
        start++;
        //step3:
        end--;
    }
    //printing array
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }


    //Count the no. of 2's 
    return 0;
}