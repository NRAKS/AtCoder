#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count=0, input;
    cin >> input;
    while(1){
        int i = input % 10;
        if (i == 1){
            count += 1;
        }
        input/=10;
        
        if (input < 1) break;
    }
    cout << count << endl;

}