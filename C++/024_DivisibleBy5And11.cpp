//Program to check if a numbers is divisible by 5 and 11
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number to check : ";
    cin >> num;
    if(num%11==0 && num%5==0){
        cout << num << " is divisble by both 5 and 11";
    }else{
        cout << num << " is not divisble by both 5 and 11";

    }
    cout << endl;
    return 0;

}