#include <iostream>
using namespace std;

int main() {
    int N, K, sum;
    int xi;
    sum = 0;

    cin >> N >> K;


    for (int i=0; i<N; i++){
        cin >> xi;
        int xiK = xi - K;
        if(xiK < 0){
            xiK *= -1;
        }

        if(xi > xiK){
            sum += xiK*2;
        }
        else{
            sum += xi*2;
        }
    }
    
    cout << sum << endl;
}