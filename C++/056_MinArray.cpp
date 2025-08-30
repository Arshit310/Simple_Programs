//Program to find minimum value in an Array 

#include<iostream>
using namespace std;

int main(){
    int limit, min = 0;
    cout << "Enter Limit of Array : ";
    cin >> limit;
    cout << "Enter value into the Array  \n";
    int arr[limit];
    for(int i = 0; i< limit; i++){
        cout << "Enter Value for "<< i << " : ";
        cin >> arr[i];
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout << "Maximum value in the Array : " << min << endl;
    return 0;
}