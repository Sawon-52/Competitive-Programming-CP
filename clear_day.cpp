#include<iostream>
using namespace std;
int main(){
    int howRainy , howCloudy, clearDay = 0;
    int week = 7;
    cin >> howRainy >> howCloudy;
    clearDay = week - (howRainy + howCloudy);
    cout << clearDay << endl;
    return 0;
}