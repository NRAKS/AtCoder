#include <iostream>
using namespace std;

int main() {
    int N, cnt, l, r;

    cnt = 0;
    cin >> N;

    for (int i=0; i<N;i++){
        cin >> l >> r;
        cnt += r - l + 1;
    }
    cout << cnt << endl;
}