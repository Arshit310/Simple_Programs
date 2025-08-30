//Program to calculate the sum of odd numbers from 1 to n

#include<iostream>
using namespace std;
int main(){
    int i, sum=0, n;
    cout << "Enter limit : ";
    cin >> n;
    for(i=0; i<=n; i++){
        if (i%2!=0){
            sum += i;
        }
    }
    cout << "Sum of odd numbers from 1 to " << n << " is : " << sum;
    cout << endl;
    return 0;
}
