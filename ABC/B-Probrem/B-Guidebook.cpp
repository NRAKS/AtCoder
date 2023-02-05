#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

bool asc_desc(tuple<string, int, int> &x, tuple<string, int, int> &y){
    if (get<0>(x) != get<0>(y)) {
            return get<0>(x) < get<0>(y);  // nameを昇順に。
        } else {
            return get<1>(x) > get<1>(y);  // pointを降順に。
        }
}

int main() {
    int N;
    cin >> N;
    using t = tuple<string, int, int>;
    vector<tuple<string, int, int>> data;

    for (int i=0; i<N; i++){
        string s;
        int p;
        cin >> s >> p;
        t tuple;
        tuple = make_tuple(s, p, i+1);
        data.push_back(tuple);
    }

    sort(data.begin(), data.end(), asc_desc);

    for (auto i : data){
        // cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << endl;
        cout << get<2>(i) << endl;
    }
}
