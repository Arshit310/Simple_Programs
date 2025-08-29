//Program to print the numbers from 1 to n

#include<iostream>
using namespace std;
int main(){
    int n, i;
    cout << "Enter limit ";
    cin >> n;
    if(n>0){
       for(i = 1; i<=n; i++){
        cout << i << " ";
        } 
    }else if(n == 0){
        cout << 0;
    }else{
       for(i = -1; i>=n; i--){
        cout << i << " ";
        } 
    } 
    cout << endl;
    return 0;
}