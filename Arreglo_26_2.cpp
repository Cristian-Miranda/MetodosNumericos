#include <iostream>
using namespace std;

int main() {
    int A = 3;

    cout << "A\tA+2\tA+4\tA+6" << endl;

    for (int i = 0; i < 5; i++) {
        cout << A << "\t" << A+2 << "\t" << A+4 << "\t" << A+6 << endl;
        A += 3;
    }

    return 0;
}

