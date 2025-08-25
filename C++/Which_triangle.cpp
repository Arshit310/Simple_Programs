//Program to find out whether a triangle is Equilateral, Isoceles or Right Triangle

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
    
    if(a1>0 && a2>0 && a3>0 && (a1+a2+a3 == 180)){
        if(a1 == 60 && a2 == 60 && a3 == 60){
            cout << "It is a Equilateral Triangle";
        }else if(a1 == a2 || a2 == a3 || a3 == a1){
            cout << "It is a Isoceles Triangle";
        }else{
            cout << "It is a Scalene Triangle";
          
        }
    }else{
        cout << "The Triangle is NOT valid";
    }

    cout << endl;
    return 0;

}