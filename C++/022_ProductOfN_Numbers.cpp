//Program to print the product of first n natural numbers 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, prod = 1;
    cout << "Enter limit : ";
    cin >> n;
    for(int i=1; i<=n; i++){
        prod *=i;
    }
    cout << "Product of first " << n << " Natural Numbers is : " << prod;

    cout<< endl;
    return 0;
}