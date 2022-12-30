#include <iostream>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
 
  // ここにプログラムを追記
  for(int i=0; i<N; i++){
    int B;
    string op;

    cin >> op >> B;
    
    if (op == "+"){
        A+=B;
        cout << i+1 << ":" << A << endl;
    }

    else if (op == "-"){
        A-=B;
        cout << i+1 << ":" << A << endl;
    }

    else if (op == "*"){
        A*=B;
        cout << i+1 << ":" << A << endl;
    }

    else if (op == "/"){
        if(B == 0){
            cout << "error" << endl;
            break;
        }
        A/=B;
        cout << i+1 << ":" << A << endl;
    }
  }
}