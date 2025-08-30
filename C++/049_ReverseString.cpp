//Program to reverse a string

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str, temp;
    cout << "Enter a String : ";
    cin >> str;
    temp = str;
    reverse(str.begin(), str.end());
    cout << "Reverse of " << temp << " is : " << str;

    cout << endl;
    return 0;
}