//Program to caclulate the power of a number using the exponent operator

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num1, power, ans=1;
    cout << "Enter number : ";
    cin >> num1;
    cout << "Enter power : ";
    cin >> power;
    for(int i =0; i<power; i++){
        ans *= num1;
    }
    cout << num1 << " raise to " << power << " is : " << ans;

    cout<< endl;
    return 0;
}