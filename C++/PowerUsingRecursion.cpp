//Program to find the power of a number using recursion

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num, i, pow, temp=1;
    cout << "Enter Number ";
    cin >> num;
    cout << "Enter Power ";
    cin >> pow;    
    i = pow;
    while(pow>0){
        temp = temp * num;
        pow--;
    }
    cout << "Power of " << num << " to " << i << " is : " << temp;
    cout << endl;
    return 0;
}