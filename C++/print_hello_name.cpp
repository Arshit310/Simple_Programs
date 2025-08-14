//Program to take name as input and print "Namah Shivaya, {name}!"

#include<iostream>
using namespace std;
int main(){
    string name;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Namah Shivaya, " << name << "!";
    cout << endl;
    return 0;

}