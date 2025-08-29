//Program to calculate the electricity bill based on slab rates

#include<iostream>
using namespace std;
int main(){
    int t, unit, bill=0;
    cout << "Enter the total units : ";
    cin >> unit;

    if (unit <= 100) 
    { 
        bill= unit * 10; 
    } 
    else if (unit <= 200)
    { 
        bill=  (100 * 10) + (unit - 100) * 15; 
    } 
    else if (unit <= 300)
    { 
        bill=  (100 * 10) + (100 * 15) + (unit - 200) * 20; 
    } 
    else if (unit > 300)
    { 
        bill=  (100 * 10) + (100 * 15) + (100 * 20) + (unit - 300) * 25; 
    } 
    unit = unit /100;
    
    cout << "Total Electricty Bill : " << bill; 
    cout << endl;
}