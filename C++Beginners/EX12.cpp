#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  int sum = 1;

  // ここにプログラムを追記
  for (int i = 0; i<S.size(); i++){
    if (S.at(i) == '+'){
        sum+=1;
    }
    else if(S.at(i) == '-'){
        sum-=1;
    }
  }
  cout << sum << endl;
}