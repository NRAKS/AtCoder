#include <iostream>
using namespace std;

int main() {
    int N;
    string color, count="Three";

    cin >> N;
    for (int i=0; i<N;i++){
        cin >> color;
        if (color == "Y"){
            count = "Four";
        }
    }
    cout << count << endl;
}