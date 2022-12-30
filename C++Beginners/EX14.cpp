#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int max_h, min_h;

    max_h = max(max(A, B), C);
    min_h = min(min(A, B), C);

    cout << max_h - min_h << endl;
}