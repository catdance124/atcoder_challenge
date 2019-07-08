// https://atcoder.jp/contests/abc127/tasks/abc127_c
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, M;
  cin >> N >> M;
  int L = 1, R = N;
  
  for (int i = 1; i <= M; i++){
    int newL, newR;
    cin >> newL >> newR;
    if (L < newL) L = newL;
    if (newR < R) R = newR;
    }

  int ans = 0;
  if (R - L >= 0) ans = R - L + 1;

  cout << ans << endl;
}