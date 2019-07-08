// https://atcoder.jp/contests/abc127/tasks/abc127_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int A, B;
  cin >> A >> B;

  int ans = 0;
  if (A>12) ans = B;
  else if (A > 5) ans = B / 2;

  cout << ans << endl;
}