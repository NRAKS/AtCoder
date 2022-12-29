#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N=5;
    string flag="NO";
    vector<int> data(N);
    for (int i=0; i<N; i++){
        cin >> data.at(i);
    }
    
    // ループを使わない処理
    if(data.at(0) == data.at(1)){
        flag == "YES";
    }
    if(data.at(1) == data.at(2)){
        flag == "YES";
    }
    if(data.at(2) == data.at(3)){
        flag == "YES";
    }
    if(data.at(3) == data.at(4)){
        flag == "YES";
    }

    // ループを使う処理
    for (int i=1; i<N; i++){
        if (data.at(i-1)==data.at(i)){
            flag = "YES";
        }
    }

    cout << flag << endl;
}