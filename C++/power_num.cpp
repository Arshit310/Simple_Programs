//Program to caclulate the power of a number using the exponent operator

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num1, power;
    cout << "Enter number : ";
    cin >> num1;
    cout << "Enter power : ";
    cin >> power;
    cout << num1 << " raise to " << power << " is : " << pow(num1, power);

    cout<< endl;
    return 0;
}