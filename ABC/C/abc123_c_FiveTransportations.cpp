// https://atcoder.jp/contests/abc123/tasks/abc123_c
#include <bits/stdc++.h>
using namespace std;

int main(void){
  long long N, A, B, C, D, E;
  cin >> N >> A >> B >> C >> D >> E;
  long long min_num = min({A, B, C, D, E});

  long long groups = (N + min_num - 1) / min_num;
  cout << 5 + groups - 1 << endl;
}