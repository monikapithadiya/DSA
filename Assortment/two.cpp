#include <iostream>
using namespace std;

int main() {
    int a[2][2] = { {10, 25}, {7, 18} }; 
    int largest = a[0][0];

    if(a[0][1] > largest) largest = a[0][1];
    if(a[1][0] > largest) largest = a[1][0];
    if(a[1][1] > largest) largest = a[1][1];

    cout << "Largest element is: " << largest;

    return 0;
}
