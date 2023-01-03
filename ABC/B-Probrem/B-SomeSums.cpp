#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, A, B, count = 0;
    cin >> N >> A >> B;

    for (int i=1; i<=N; i++){
        int total=0;
        int data = i;
        while(1){
            
            total+=(data%10);
            data/=10;
            if (data<1) break;
        }
        if (total >= A && total <= B){
            count+=i;
        }
    }

    cout << count << endl;
}