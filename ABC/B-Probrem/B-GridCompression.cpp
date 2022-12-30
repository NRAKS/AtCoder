#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> data(H, vector<char>(W));

    for (int i=0; i<H; i++){
        for (int j=0; j<W; j++){
            cin >> data.at(i).at(j);
        }
    }
    for (int h=0; h<H; h++){
        char word_fin = '.';
        for (int w=0; w<W; w++){
            if (data.at(h).at(w) == '#'){
                word_fin = '#';
                break;
            }
        }
        if ( word_fin == '.'){
            data.erase(data.begin()+h);
            h-=1;
            H-=1;
        }
    }
    // cout << "列参照" << endl;
    for (int w=0; w<W; w++){
        char word_fin = '.';
        for (int h=0; h<H; h++){
            if (data.at(h).at(w) == '#'){
                word_fin = '#';
                break;
            }
        }
        if ( word_fin == '.'){
            for (int h=0; h<H; h++){
                data.at(h).erase(data.at(h).begin()+w);
            }
            w-=1;
            W-=1;
        }
        
    }

    for (int h=0; h<H; h++){
        for (int w=0; w<W; w++){
            cout << data.at(h).at(w);
        }
        cout << endl;
    }
}