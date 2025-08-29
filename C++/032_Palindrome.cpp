//Program to check if a number is palindrome (39, 93)

#include<iostream>
using namespace std;
int main(){
    int num, t, a=0;
    cout << "Enter the number to check : ";
    cin >> num;
    t = num;

    while(num > 0){
        a = (a *10 )+ (num%10);
        num = num /10;
    }
    if(a == t){
        cout << t<< " is a palindrome " ; 
    }else{
        cout << t << " is not a palindrome " ; 
    }
    cout << endl;
}