//Program to calculate the LCM of 2 numbers 
#include<iostream>
using namespace std;
int main(){
    int num1, num2, temp, a, b, gcd, lcm;
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
    lcm = a * b / gcd;
    cout << "LCM of "<<a<<", "<<b<< " is : "  << lcm;


    cout << endl;

    return 0;
}