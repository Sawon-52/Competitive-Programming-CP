#include<iostream>
using namespace std;
int main(){
    int a, b, area, parameter;
    cin >> a >> b;
    area = a * b;
    parameter = 2 * (a + b);
    cout << area << " " << parameter << endl;
    return 0;
}