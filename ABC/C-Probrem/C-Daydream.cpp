/*これは解説を見た後*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string S, T;
    vector<string> data(4);
    data = {"dream", "dreamer", "erase", "eraser"};
    cin >> S;

    reverse(S.begin(), S.end());
    for (int i=0; i<data.size(); i++){
        reverse(data.at(i).begin(), data.at(i).end());
    }
    bool can = true;

    for (int i=0; i<S.size();){
        bool can2 = false;

        for (int j=0; j<4; j++){
            string d = data.at(j);
            if (S.substr(i, d.size()) == d){
                can2 = true;
                i+=d.size();    
            }
        }
        if (!can2){
            can = false;
            break;
        }
    }

    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;


}