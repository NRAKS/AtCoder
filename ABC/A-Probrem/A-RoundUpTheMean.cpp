#include <iostream>
using namespace std;

int main(){
    int a, b;
    double ave;
    int remainder;

    cin >> a >> b;

    ave = (a + b) / 2;
    remainder = (a + b) % 2;

    cout << ave + ((remainder * 2) / 2) << endl;
}