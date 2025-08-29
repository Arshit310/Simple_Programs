//Program to check if a number is a perfect number or not

#include<iostream>
using namespace std;
int main(){
    int num, ds=0;
    cout << "Enter the number to check : ";
    cin >> num;

    for(int i = 1; i<num; i++){
        if (num % i == 0){
            ds += i;
        }
    }
    if(ds == num){
        cout << num<< " is a perfect number" ; 
    }else{
        cout << num << " is not a perfect number" ; 
    }
    cout << endl;
}