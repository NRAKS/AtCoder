#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, cnt=-1;
    cin >> N;
    vector<int> vec(N);

    for (int i=0; i<N; i++){
        cin >> vec.at(i);
    }

    int push = 1;
    for (int i=0; i<N-1; i++){
        push = vec.at(push-1);
        if (push == 2){
            cnt = i+1;
            break;
        }
    }
    
    cout << cnt << endl;
}