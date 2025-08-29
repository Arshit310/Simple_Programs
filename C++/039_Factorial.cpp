//Program to find the Factorial of a Number

#include<iostream>
using namespace std;
int main(){
    int n, i, f=1;
    cout << "Enter Number ";
    cin >> n;
    for(i = 1; i<=n; i++){
        f = f * i;
    }
    cout << "Factorial of " << n << " is : " << f;
    cout << endl;
    return 0;
}