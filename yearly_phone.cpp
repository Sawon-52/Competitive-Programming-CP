#include<iostream>
using namespace std;
int main(){
    int n;
    int lastTwoDigits;
    cin >> n;
    lastTwoDigits = n % 100;
    if (lastTwoDigits < 10){
        cout <<"K0" << lastTwoDigits << endl;
    }else{
        cout <<"K" << lastTwoDigits << endl;
    }
    return 0;
}