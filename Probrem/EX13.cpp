#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int main() {
    int N, sum, ave;
    sum = 0;
    cin >> N;

    vector<int> vec(N);

    for (int i=0; i<N; i++){
        cin >> vec.at(i);
        sum+=vec.at(i);
    }
    ave = sum / N;
    for (int i=0; i<N; i++){
        int diff;
        diff = ave - vec.at(i);
        if (diff < 0){
            cout << - diff << endl;
        }
        else{
            cout << diff << endl;
        }
    }
}