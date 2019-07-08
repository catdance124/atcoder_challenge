// https://atcoder.jp/contests/abc123/tasks/abc123_b
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int time[5] = {0};
  for (int i = 0; i < 5; i++)  cin >> time[i];

  int min_mod = 10;
  for (int i = 0; i < 5; i++)
    if (time[i] % 10 != 0)
      min_mod = min(time[i] % 10, min_mod);  // 最小の余りを保存

  int sum = 0;
  for (int i = 0; i < 5; i++){
    sum += (time[i] + 9) / 10 * 10;
  }
  cout << sum -(10 -min_mod) << endl;
}