//Program to check whether the number is an Armstrong Number or not

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, i, t, s=0;
    cout << "Enter Number ";
    cin >> n;
    t = n;
    while(t>0){
        s = s+ pow((t%10),3);
        t = t/10;
    }
    cout << "Sum of cubes of digit : " << s;
    if(s == n){
        cout << "\nIt is an Armstrong Number";
    }else{
        cout << "\nIt is not an Armstrong Number";
    }
    cout << endl;
    return 0;
}