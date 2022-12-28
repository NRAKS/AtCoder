#include <iostream>
using namespace std;

int main() {
    int N, K, sum;
    sum = 1;

    cin >> N >> K;

    for (int i=0; i<N; i++){
        if(sum*2 - sum < K){
            sum*=2;
        }
        else{
            sum+=K;
        }
    }
    
    cout << sum << endl;
}