#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Alice=0, Bob=0, max=0, max_position=0;
    cin >> N;
    int N_origin = N;
    vector<int> vec_N(N);

    for (int i=0; i<N; i++){
        cin >> vec_N.at(i);
    }
    for (int i=0; i<N_origin; i++){
        max = 0;
        for (int j=0; j<N; j++){
            if(max < vec_N.at(j)){
                max = vec_N.at(j);
                max_position = j;
            }
        }
        if (i%2 ==0){
            Alice += max;
        }
        else{
            Bob+= max;
        }
        vec_N.erase(vec_N.begin()+max_position);
        N-=1;
    }

    cout << Alice - Bob << endl;
}