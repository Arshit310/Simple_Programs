//Program to find sum of values in an Array 

#include<iostream>
using namespace std;

int main(){
    int limit, sum = 0;
    cout << "Enter Limit of Array : ";
    cin >> limit;
    cout << "Enter value into the Array  \n";
    int arr[limit];
    for(int i = 0; i< limit; i++){
        cout << "Enter Value for "<< i << " : ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Sum of values in the Array : " << sum << endl;
    return 0;
}