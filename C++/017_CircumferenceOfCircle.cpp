//Program to calculate the circumference_of_circle given the radius

#include<iostream>
using namespace std;
int main(){
    int rad;
    float cir;
    cout << "Enter radius of circle : ";
    cin >> rad;
    cir = 3.14*rad*2;
    cout << "Circumference of circle with radius " << rad << " is : " << cir;
    cout << endl;
    return 0;
}