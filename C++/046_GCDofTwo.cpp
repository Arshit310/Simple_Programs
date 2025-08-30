//Program to find the GCD of two numbers 

#include<iostream>
using namespace std;
int main(){
    int num1, num2, temp, gcd, a, b;
    cout << ("Enter first number : ");
    cin >> num1;
    cout << ("Enter second number : ");
    cin >> num2;
    a = num1;
    b = num2;
    while(num2!=0){ //Function to calculate GCD using Euclideam Algorithm
        int temp = num2;
        num2 = num1%num2;
        num1 = temp;
    }
    gcd = num1;

    cout << "GCD of " << a <<", " << b << " is : " << gcd;

    cout << endl;
    return 0;
}