// https://atcoder.jp/contests/abc124/tasks/abc124_c
#include <bits/stdc++.h>
using namespace std;

int main(void){
  string S;
  cin >> S;

  int res = S.size();
  for (int i = 0; i <= 1; i++){
    int value = i;
    int count = 0;
    for (int i = 0; i < S.size(); i++){
      if (S[i] - '0' == value)  // 文字->数値
        count++;
      value = 1 - value;
    }
    res = min(res, count);
  }

  cout << res << endl;
}