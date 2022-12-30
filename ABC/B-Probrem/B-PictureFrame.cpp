#include <iostream>
#include <vector>

using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    vector<char> vec(H*W);

    for (int i=0; i<H*W; i++){
        cin >> vec.at(i);
    }

    // 出力
    for (int i=0; i<W+2; i++){
        cout << '#';
    }
    cout <<endl;

    for (int y=0; y<H; y++){
        cout << '#';
        for (int x=0; x<W; x++){
            cout <<vec.at(y*W + x); 
        }
        cout << '#' << endl;
    }
    for (int i=0; i<W+2; i++){
        cout << '#';
    }
    cout << endl;
}