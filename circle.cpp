#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cin >> r;

    double pi = 3.141592653589793;

    double area = pi * r * r;
    double circumference = 2 * pi * r;

    cout << fixed << setprecision(6);
    cout << area <<" " << circumference << endl;

    return 0;
}