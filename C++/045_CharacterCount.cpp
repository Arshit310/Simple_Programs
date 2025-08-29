//Program to count of character  in string
#include<iostream>
using namespace std;

int main(){
    int count = 0;
    string str;
    char e;
    cout << "Enter a String : ";
    cin >> str;
    cout << "Enter character to count :  ";
    cin >> e;
    for(int i=0; i<str.length(); i++){
        if (str[i] == e){
            count++;
        }
    }
    cout << "Count of " << e << " is : " << count;

    cout << endl;
    return 0;
}