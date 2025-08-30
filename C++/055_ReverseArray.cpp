//Program to find reverse an Array 

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int limit, max = 0, i, temp;
    cout << "Enter Limit of Array : ";
    cin >> limit;
    cout << "Enter value into the Array  \n";
    int arr[limit];
    for(i = 0; i< limit; i++){
        cout << "Enter Value for "<< i << " : ";
        cin >> arr[i];
    }
    cout << "Your Array : ";
    for(i = 0; i<limit; i++){
        cout << arr[i] << " ";
    }
    for (int i = 0; i < limit / 2; i++) {
        temp = arr[i];
        arr[i] = arr[limit - 1 - i]; 
        arr[limit - 1 - i] = temp;   
    }
    cout << "\nReversed Array : ";
    for(i = 0; i<limit; i++){
        cout << arr[i] << " ";
    }
    return 0;
}