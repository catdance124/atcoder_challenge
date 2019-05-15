// https://atcoder.jp/contests/abc123/tasks/abc123_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int d[5], k;
  for (int i = 0; i < 5; i++) cin >> d[i];
  cin >> k;

  bool ok = true;
  for (int i = 0; i < 5; i++){
    for (int j = i; j < 5; j++){
      if (i != j && abs(d[i] - d[j]) > k)
        ok = false;
    }
  }
  cout << ((ok) ? "Yay!" : ":(") << endl;
}