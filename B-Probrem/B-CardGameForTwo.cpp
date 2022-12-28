#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, money=0, money_max=0;
    cin >> N;
    vector<string> vec_N(N);

    for (int i=0; i<N; i++){
        cin >> vec_N.at(i);
    }
    cin >> M;
    vector<string> vec_M(M);
    for (int i=0; i<M; i++){
        cin >> vec_M.at(i);
    }
    
    for(int i=0; i<N; i++){
        money=0;
        for(int x=0; x<N; x++){
            if (vec_N.at(i) == vec_N.at(x))
                money+=1;
        }
        for(int x=0; x<M; x++){
            if(vec_N.at(i) == vec_M.at(x)){
                money-=1;
            }
        }
        if (money_max < money)
            money_max = money;
    }

    cout << money_max << endl;
}