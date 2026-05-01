#include<iostream>
using namespace std;
int main(){
    int nuggets, starPieces, total = 0;
    cin >> nuggets >> starPieces;

    total = (nuggets * 5000) + (starPieces * 9800);

    cout <<total << endl;
    return 0;
}  