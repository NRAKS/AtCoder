#include <iostream>
using namespace std;

int main() {
    int a, b, prod;

    cin >> a >> b;
    prod = a * b;

    if(prod % 2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}