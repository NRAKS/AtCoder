#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0, sum_min = 0;

    cin >> N;

    for (int i=0; i<N; i++){
        int A;
        cin >> A;
        sum = 0;

        while (1)
        {
            if(A%2 == 1){
                break;
            }
            else{
                A/=2;
                sum+=1;
            }
        }

        if(i == 0){
            sum_min = sum;
        }
        else if(sum < sum_min){
            sum_min = sum;
        }
        
    }
    cout << sum_min << endl;
}