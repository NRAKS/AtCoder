#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> result(M, vector<int>(2));

    for (int i=0; i<M; i++){
        for (int j=0; j<2; j++){
            cin >> result.at(i).at(j);
        }
    }

    // cout << "complete input" << endl;
    vector<vector<char>> map(N, vector<char>(N, '-'));

    for (int i=0; i<M; i++){
        map.at(result.at(i).at(0)-1).at(result.at(i).at(1)-1) = 'o';
        map.at(result.at(i).at(1)-1).at(result.at(i).at(0)-1) = 'x';
    }

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            cout << map.at(i).at(j);
            if (j < N-1){
                cout << " ";
            }
        }
        cout << endl;
    }
}