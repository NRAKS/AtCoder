#include <iostream>
#include <string>
using namespace std;

 
// 以下に、24時間表記の時計構造体 Clock を定義する
 struct Clock
 {
    /* data */
 
// Clock構造体のメンバ変数を書く
//   int hour    時間を表す (0~23の値をとる)
//   int minute  分を表す   (0~59の値をとる)
//   int second  秒を表す   (0~59の値をとる)
    int hour;
    int minute;
    int second;
 
// メンバ関数 set の定義を書く
    void set(int h, int m, int s){
//   関数名: set
//   引数: int h, int m, int s (それぞれ時、分、秒を表す)
//   返り値: なし
//   関数の説明:
//     時・分・秒を表す3つの引数を受け取り、
//     それぞれ、メンバ変数 hour, minute, second に代入する
    hour = h;
    minute = m;
    second = s;
    }
// メンバ関数 to_str の定義を書く
    string to_str(){
//   関数名: to_str
//   引数: なし
//   返り値: string型
//   関数の仕様:
//     メンバ変数が表す時刻の文字列を返す
//     時刻の文字列は次のフォーマット
//     "HH:MM:SS"
//     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列
        string HH, MM, SS;
        if (hour / 10 < 1)    HH = "0"+ to_string(hour);
        else    HH = to_string(hour);

        if (minute / 10 < 1)    MM = "0"+ to_string(minute);
        else    MM = to_string(minute);

        if (second / 10 < 1)    SS = "0"+ to_string(second);
        else    SS = to_string(second);
        
        return HH+":"+MM+":"+SS;
    }
// メンバ関数 shift の定義を書く
    void shift(int diff_second){
//   関数名: shift
//   引数: int diff_second
//   返り値: なし
//   関数の仕様:
//     diff_second 秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
//     diff_second の値が負の場合、時刻を戻す
//     diff_second の値が正の場合、時刻を進める
//     diff_second の値は -86400 ~ 86400 の範囲を取とりうる
    if (diff_second>=0){
        second += diff_second;
        minute += second/60;
        second %= 60;
        hour += minute /60;
        minute%=60;
        hour%=24;
    }
    else{
        second = second + diff_second;
        if (second < 0 && second%60==0){
            minute = minute + (second/60);
            second = (60 + second%60)%60;
        }
        else if (second < 0){
            minute = minute + (second/60) -1;
            second = (60 + second%60)%60;
        }
        
        if (minute < 0 && minute%60 == 0){
            hour = hour + (minute/60);
            minute = (60 + minute%60)%60;
        }
        else if (minute < 0){
            hour = hour + (minute/60)-1;
            minute = (60 + minute%60)%60;
        }

        if (hour < 0 && hour%24 == 0){
            hour = (24 + hour%24)%24;
        }
        else if (hour < 0){
            hour = 24 + hour%24;
        }
    }
    }
  };
 
// -------------------
// ここから先は変更しない
// -------------------
 
int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;
 
  // Clock構造体のオブジェクトを宣言
  Clock clock;
 
  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);
 
  // 時刻を出力
  cout << clock.to_str() << endl;
 
  // 時計を進める(戻す)
  clock.shift(diff_second);
 
  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}

