//Program to find the day of the week using anumber(1 - 7)

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int num;
    map<int, string> dict;
    dict[1] = "Sunday";
    dict[2] = "Monday";
    dict[3] = "Tuesday";
    dict[4] = "Wednesday";
    dict[5] = "Thrusday";
    dict[6] = "Friday";
    dict[7] = "Saturday";

    cout << "Enter number(1-7) to search for day : ";
    cin >> num;
    
    for (auto it : dict){
        if(it.first == num){
            cout << it.second;
        } 
    }
    
    cout << endl;
    return 0;
}