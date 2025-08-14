//Program to calculate the area of rectangle, by taking length and width as input from user

#include<iostream>
using namespace std;
int main(){
    int length, width, area;
    cout << "Enter length of rectangle : ";
    cin >> length;
    cout << "Enter width of rectangle : ";
    cin >> width;
    area = length * width;
    cout << "Area of Rectangle with length : " << length << " and width : " << width << " is " << area;
    cout << endl;
    return 0;

}