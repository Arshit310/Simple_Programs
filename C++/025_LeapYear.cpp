//Program to check if a given year leap year or no

#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter year to check : ";
    cin >> year;
    if(year % 100 == 0 && year%400==0){
        cout << "it is";
    }else if(year % 4== 0 || year %100 ==0){
        cout << "it is";
    }else{
        cout << "it is not";
    }
    cout << endl;
    return 0;
}