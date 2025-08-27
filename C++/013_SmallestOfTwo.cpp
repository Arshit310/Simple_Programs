//Program to ccalculate the largest of two numbers

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    
    if(num1>num2){
        cout << num2 <<" is the smallest";
    }else if(num2>num1 ){
        cout << num1 <<" is the smallest";
    }else{
        cout << "Both are equal";
    }
    cout << endl;
    return 0;
}