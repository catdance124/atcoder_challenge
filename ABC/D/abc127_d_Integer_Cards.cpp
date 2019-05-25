// https://atcoder.jp/contests/abc127/tasks/abc127_d
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, M;
  cin >> N >> M;
  long long A[N];
  for (int i = 0; i < N; i++) cin >> A[i];
  sort(A, A + N);

  vector<pair<int, int>> p(M);
  for (int i = 0; i < M; i++){
    int B, C;
    cin >> B >> C;
    p[i] = make_pair(C, B);
  }
  sort(p.begin(), p.end()); 

  for (int i = M-1; i >= 0; i--){
  for (int j = 0; j < p[i].second; j++){
    if (A[j] < p[i].first)
      A[j] = p[i].first;
    else
      goto end;
  }
  sort(A, A + N);
  }

  end:
    long long sum = 0;
    for (int i = 0; i < N; i++){
      sum += A[i];
    }
    cout << sum << endl;
}