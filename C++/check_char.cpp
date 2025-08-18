//Program to check if a given character is vowel or consonant

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    char char1;
    cout << "Enter char : ";
    cin >> char1;
    string str = "aeiouAEIOU";
    if(str.find(char1) != string::npos){
        cout << char1<< " is a vowel";
    }else{
        cout << char1<< " is a consonant";
    }

    cout<< endl;
    return 0;
}