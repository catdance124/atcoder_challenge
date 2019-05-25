// https://atcoder.jp/contests/abc040/tasks/abc040_c
#include <bits/stdc++.h>
using namespace std;

template <class T> inline bool chmax(T &a, T b){
  if (a < b){
    a = b;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &a, T b){
  if (a > b){
    a = b;
    return 1;
  }
  return 0;
}

const long long INF = 1LL << 60;

// DP テーブル
int main(void){
  int N; cin >> N;  // 柱の本数入力
  long long h[N+2];  // 柱の高さを格納する配列
  for (int i = 0; i < N; ++i)
    cin >> h[i];

  long long dp[N+1];  // DPテーブル
  for (int i = 0; i < N; ++i)
    dp[i] = INF;
  dp[0] = 0;

  // 柱[i]への経路を2通り試し，柱[i]への最小コストを保存する
  for (int i = 1; i < N; ++i) {
      chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
      if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
  }

  cout << dp[N-1] << endl;
}