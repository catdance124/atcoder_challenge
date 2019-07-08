// https://atcoder.jp/contests/abc127/tasks/abc127_d
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, M;
  cin >> N >> M;
  vector<pair<long long, long long>> A(N+M);
  for (int i = 0; i < N; i++){
    long long t;
    cin >> t;
    A.push_back(make_pair(t, 1));
  }
  for (int i = 0; i < M; i++){
    long long B, C;
    cin >> B >> C;
    A.push_back(make_pair(C, B));
  }
  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());

  long long ans = 0;
  int count = 0;
  while (N>0){
    if (A[count].second <= N)  ans += A[count].first * A[count].second;
    else  ans += A[count].first * N;
    N -= A[count].second;
    count++;
  }
  cout << ans << endl;
}