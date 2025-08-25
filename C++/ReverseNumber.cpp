//Program to reverse a number

#include<iostream>
using namespace std;
int main(){
    int n, i, t, s=0;
    cout << "Enter Number ";
    cin >> n;
    t = n;
    while(t>0){
        s = (s*10)+ (t%10);
        t = t/10;
    }
    cout << "Sum of digit of " << n << " is : " << s;
    cout << endl;
    return 0;
}