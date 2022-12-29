#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    vector<int> priceA(N), priceP(N);

    int count = 0;

    for (int i=0; i<N; i++){
        cin >> priceA.at(i);
    }
    for (int i=0; i<N; i++){
        cin >> priceP.at(i);
    }

    for (int i=0; i<N; i++){
        for (int j =0; j<N; j++){
            if (priceA.at(i)+priceP.at(j) == S){
                count += 1;
            }
        }
    }

    cout << count << endl;
}