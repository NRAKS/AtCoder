#include <iostream>
using namespace std;

int main() {
    int N, sum;
    sum = 0;

    cin >> N;
    for (int i=N; i>=1; i/=10){
        sum += (i%10);
    }
    
    if(N%sum == 0){
        cout << "Yes" << endl;
    }
    else{
        cout <<"No" << endl;
    }
}