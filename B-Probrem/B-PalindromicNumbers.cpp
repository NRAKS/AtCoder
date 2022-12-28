#include <iostream>
using namespace std;

int main() {
    int A, B, sum;
    sum = 0;

    cin >> A >> B;

    for (int i=A; i<=B; i++){
        if(i%10 == i/10000){
            if((i/10)%10 == ((i%10000)/1000)){
                sum+=1;
            }
        }
    }
    cout << sum << endl;
}