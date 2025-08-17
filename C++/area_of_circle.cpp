//Program to calculate the area of circle given the radius

#include<iostream>
using namespace std;
int main(){
    int rad;
    float area;
    cout << "Enter radius of circle : ";
    cin >> rad;
    area = 3.14*rad*rad;
    cout << "Area of circle with radius " << rad << " is : " << area;
    cout << endl;
    return 0;
}