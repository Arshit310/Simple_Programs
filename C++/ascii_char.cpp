//Program to print the ASCII value of a character

#include<iostream>
using namespace std;

int main(){
    char char1;
    cout << "Enter char : ";
    cin >> char1;
    cout << "ASCII value of " << char1 <<" is : " << static_cast<int>(char1);

    cout<< endl;
    return 0;
}