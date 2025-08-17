//Program to ccalculate the average of three numbers

#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3, avg;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << "Enter third number : ";
    cin >> num3;
    avg = (num1+num2+num3)/3;
    cout << "Average of " << num1 << ", " << num2 << " and " << num3 << " is : " << avg;
    cout << endl;
    return 0;
}