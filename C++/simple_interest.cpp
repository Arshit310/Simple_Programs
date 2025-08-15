//Program to calculate the simple intrest
#include<iostream>
using namespace std;
int main(){
    int principle, rate, year, si;
    cout << "Enter principle amount : ";
    cin >> principle;
    cout << "Enter rate of intrest : ";
    cin >> rate;
    cout << "Enter year : ";
    cin >> year;
    si = (principle*rate*year)/100;
    cout << "Simple Intrest = " << si;
    cout << endl;
    return 0;

}