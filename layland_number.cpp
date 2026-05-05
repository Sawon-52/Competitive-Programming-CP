#include<iostream>;
#include<cmath>;
using namespace std;

int main(){
    int A, B, result1, result2;
    cin >> A >> B;
    result1 = pow(A, B);
    result2 = pow(B, A);
    cout << result1 + result2 << endl;

    return 0;
}
// mehedi hasan