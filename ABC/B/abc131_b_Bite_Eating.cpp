// https://atcoder.jp/contests/abc131/tasks/abc131_b
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, L;
  cin >> N >> L;
  int ans = 10000;
  int sum = 0;
  int tmp = 0;
  for (int i = 0; i < N; i++){
    ans = min(ans, abs(L + i));
    if (ans == abs(L + i)){
      tmp = L + i;
    }
      sum += L + i;
  }
  cout << sum - tmp << endl;
}