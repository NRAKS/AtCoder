#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> data(N);

    for (int i=0; i<N; i++){
        cin >> data.at(i).first >> data.at(i).second;
        int tmp;
        // cout << data.at(i).first;
        tmp = data.at(i).first;
        data.at(i).first = data.at(i).second;
        data.at(i).second = tmp;
    }

    sort(data.begin(), data.end());

    for (auto d : data){
        int x, y;
        tie(x, y) = d;
        cout << y << " " << x << endl;
    }
}