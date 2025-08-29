//Program to check the validity of a triangle given the angles
#include<iostream>
using namespace std;
int main(){
    int a1, a2, a3;
    cout << "Enter First Angle : ";
    cin >> a1;
    cout << "Enter Second Angle : ";
    cin >> a2;
    cout << "Enter Third Angle : ";
    cin >> a3;
    
    if(a1>0 && a2>0 && a3>0 && a1+a2+a3 == 180){
        cout << "The Triangle is Valid.";
    }else{
        cout << "The Triangle is Invalid";
    }

    cout << endl;
    return 0;

}