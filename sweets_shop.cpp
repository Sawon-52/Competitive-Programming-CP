#include<iostream>
using namespace std;
int main(){
    int hadAmount, laddusQty, jalebisQty, laddusPerPrice = 10, jalebisPerPrice = 20;
    cin >> hadAmount >> laddusQty;
    int totalLaddusPrice = laddusQty * laddusPerPrice;

    jalebisQty = (hadAmount - totalLaddusPrice) / jalebisPerPrice;

    cout << jalebisQty << endl;
    return 0;
}