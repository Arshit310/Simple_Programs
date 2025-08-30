//Program to calculate the power of a number using recursion

#include<iostream>
using namespace std;
int main(){
    int num, pow, ans = 1;
    cout << "Enter Number : ";
    cin >> num;
    cout << "Enter Power : ";
    cin >> pow;
    int t = pow;
    while(pow>0){
        ans = ans * num;
        pow--;
    }
    cout << num << " raised to " << t << " is : " << ans; 
    cout << endl;
    return 0;
}