//Program to swap 2 variables
#include<iostream>
using namespace std;
int main(){
    int temp, num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout <<"Before Swap\n""First Number : " << num1 << ", Second Number : " << num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "\nAfter Swap""\nFirst Number : " << num1 << ", Second Number : " << num2;
    cout << endl;
    return 0;

}