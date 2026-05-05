#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int a = x / 100;
    int b = (x / 10) % 10;
    int c = x % 10;

    cout << 111 * (a + b + c) << endl;

    return 0;
}