//Program to find average of values in an Array 

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
    double avg = static_cast<double>(sum) / limit;
    cout << "Average of values in the Array : " << avg << endl;
    return 0;
}