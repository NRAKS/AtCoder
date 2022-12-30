#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, count=0;
    cin >> N;
    vector<int> di(N);

    for (int i=0; i<N; i++){
        cin >> di.at(i);
    }

    int  max_pre=-1;
    for (int i=0; i<N; i++){
        int max = 0, max_position=0;
        for(int j=0; j<di.size(); j++){
            if(max<di.at(j)){
                max = di.at(j);
                max_position = j;
            }
        }
        if (max != max_pre){
            count+=1;
            // cout << max << endl;
            di.erase(di.begin()+max_position);
            max_pre = max;
        }
        else if(max == max_pre){
            di.erase(di.begin()+max_position);
        }
    }

    cout << count << endl;
}