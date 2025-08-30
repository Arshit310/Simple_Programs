//Program to find maximum value in an Array 

#include<iostream>
using namespace std;

int main(){
    int limit, max = 0;
    cout << "Enter Limit of Array : ";
    cin >> limit;
    cout << "Enter value into the Array  \n";
    int arr[limit];
    for(int i = 0; i< limit; i++){
        cout << "Enter Value for "<< i << " : ";
        cin >> arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "Maximum value in the Array : " << max << endl;
    return 0;
}