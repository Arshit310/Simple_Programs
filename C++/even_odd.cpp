//Program to check if a number is even or odd

#include<iostream>
using namespace std;
int main(){
    int num1;
    cout << "Enter number to check : ";
    cin >> num1;
    if(num1%2==0){
        cout << num1 << " is even";
    }else{
        cout << num1 << " is odd";
    }
    cout << endl;
    return 0;
}