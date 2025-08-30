//Program to convert a string to upper case or lower case 

#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main(){
    int count = 0;
    string str, scase;
    cout << "Enter a String : ";
    cin >> str;
    cout << "Enter case to change (upper/lower):  ";
    cin >> scase;
    if(scase == "upper"){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }else if (scase == "lower"){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    
    cout << "String in " << scase << " case is : " << str;

    cout << endl;
    return 0;
}