// https://atcoder.jp/contests/abc114/tasks/abc114_b
#include <bits/stdc++.h>
using namespace std;

int main(void){
  string S;
  cin >> S;
  int diff_min = 999;

  for (int i = 0; i < S.size() -2; i++){
    int diff = 753 - stoi(S.substr(i, 3));
    if (abs(diff) < diff_min)
      diff_min = abs(diff);
  }

  cout << diff_min << endl;
}