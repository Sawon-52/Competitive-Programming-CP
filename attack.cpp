#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    long long k = A / B;

    if (A % B != 0) {
        k++;
    }

    cout << k << endl;

    return 0;
}