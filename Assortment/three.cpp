#include <iostream>
using namespace std;

int main() {
    int a[2][2] = { {1, 2}, {3, 4} };
    int t[2][2];
   
    t[0][0] = a[0][0];
    t[0][1] = a[1][0];
    t[1][0] = a[0][1];
    t[1][1] = a[1][1];

    cout << "Transpose of the matrix:\n";
    cout << t[0][0] << " " << t[0][1] << "\n";
    cout << t[1][0] << " " << t[1][1] << "\n";

    return 0;
}
