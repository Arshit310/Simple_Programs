//Program to determine the grade of a student based on the marks

#include<iostream>
using namespace std;
int main(){
    int mark1, mark2, total;
    cout << "Enter first number : ";
    cin >> mark1;
    cout << "Enter second number : ";
    cin >> mark2;
    total = (mark1+mark2)/2;
    cout<< "Total Marks : " << total << ", ";
    
    if(total>90){
        cout << "Grade is O";
    }else if(total>80){
        cout << "Grade is A";
    }else if(total>80){
        cout << "Grade is B";
    }else if(total>80){
        cout << "Grade is C";
    }else if(total>80){
        cout << "Grade is D";
    }else{
        cout << "Grade is F";

    }
    cout << endl;
    return 0;
}