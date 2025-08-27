//Program to convert celcius to fahrenheit

#include<iostream>
using namespace std;
int main(){
    int cel, fahren;
    cout << "Enter Celcius : ";
    cin >> cel;
    fahren = (cel*9/5)+32;
    cout << "Fahrenheit : " << fahren;
    cout << endl;
    return 0;

}