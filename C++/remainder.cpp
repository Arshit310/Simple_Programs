//Program to find the remaineder when one number is divideed by another

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter dividend : ";
    cin >> num1;
    cout << "Enter divsor : ";
    cin >> num2;
    int rem = num1%num2;
    cout << "Remainder : " << rem;
    cout << endl;
    return 0;

}