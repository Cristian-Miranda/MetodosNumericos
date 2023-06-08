#include <iostream>
using namespace std;

int main() {
    int A[] = {3, 5, 6, 8, 4, 7, 8, 5, 3, 1};
    int B[] = {3, 4, 6, 8, 9, 1, 2, 3, 0, 9};

    // A[3] mod (B[2]/2)
    int result1 = A[3] % (B[2]/2);
    cout << "A[3] mod (B[2]/2) = " << result1 << endl;

    // B[A[1]] - A[9]
    int result2 = B[A[1]] - A[9];
    cout << "B[A[1]] - A[9] = " << result2 << endl;

    // A[0] + A[1+2]
    int result3 = A[0] + A[1+2];
    cout << "A[0] + A[1+2] = " << result3 << endl;

    // A[5] + B[5]
    int result4 = A[5] + B[5];
    cout << "A[5] + B[5] = " << result4 << endl;

    // (A[3]/B[2])/2
    int result5 = (A[3]/B[2])/2;
    cout << "(A[3]/B[2])/2 = " << result5 << endl;

    return 0;
}
