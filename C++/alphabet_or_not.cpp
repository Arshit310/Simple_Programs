//Program to check if a given character is alphabet or not

#include<iostream>
using namespace std;

int main(){
    char char1;
    cout << "Enter character to check : ";
    cin >> char1;
    if ((char1 >= 65 && char1 <= 90)
        || (char1 >= 97 && char1 <= 122))
        cout << " Alphabet ";
    else if (char1 >= 48 && char1 <= 57)
        cout << " Digit ";
    else
        cout << " Special Character ";
    cout << endl;
    return 0;
}