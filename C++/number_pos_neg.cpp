//Program to check if a number is positive, negative or zero
#include<iostream>
using namespace std;
int main(){
    int num1;
    cout << "Enter number to check : ";
    cin >> num1;
    if(num1>0){
        cout << num1 << " is positive";
    }else if(num1<0){
        cout << num1 << " is negative";
    }else{
        cout << num1 << " is zero";
    }
    cout << endl;
    return 0;
}