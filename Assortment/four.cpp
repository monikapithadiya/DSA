#include <iostream>
using namespace std;

int main() {
    int a[2][2] = { {1, 2}, {3, 4} };

    int row1_sum = a[0][0] + a[0][1];
    int row2_sum = a[1][0] + a[1][1];

    int col1_sum = a[0][0] + a[1][0];
    int col2_sum = a[0][1] + a[1][1];

    cout << "Sum of Row 1: " << row1_sum << endl;
    cout << "Sum of Row 2: " << row2_sum << endl;
    cout << "Sum of Column 1: " << col1_sum << endl;
    cout << "Sum of Column 2: " << col2_sum << endl;

    return 0;
}
