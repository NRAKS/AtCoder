#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Y, a=-1, b=-1, c=-1;
    cin >> N >> Y;

    for(int x=0; x<=N; x++){
        int total = 0;
        for(int y=0; y<=N-x; y++){
            int z = N-x-y;
            total = 10000*x + 5000*y + 1000*z;
            if (total == Y) {
                a = x;
                b = y;
                c = z;
                break;
            }
        }
        if (total == Y) break;
    }

    cout << a << " " << b << " " << c << endl;
}