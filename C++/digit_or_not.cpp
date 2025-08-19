//Program to find the day of the week using anumber(1 - 7)

#include<iostream>
using namespace std;

int main(){
    char char1;
    cout << "Enter character to check : ";
    cin >> char1;
    if ((char1 >= 65 && char1 <= 90)
        || (char1 >= 97 && char1 <= 122))
        cout << char1 <<" is an alphabet";
    else if (char1 >= 48 && char1 <= 57)
        cout << char1 <<" is a digit";
    else
        cout << char1 << " is a special Character";
    cout << endl;
    return 0;
}