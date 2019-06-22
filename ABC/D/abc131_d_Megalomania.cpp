// https://atcoder.jp/contests/abc131/tasks/abc131_d
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  cin >> N;
  vector<pair<int, int>> vp(N);
  for (int i = 0; i < N; i++){
    int A, B;
    cin >> A >> B;
    vp[i] = make_pair(B, A);
  }
  sort(vp.begin(), vp.end());

  int deadline = 0;
  string ans = "Yes";
  for (int i = 0; i < N; i++){
    deadline += vp[i].second;
    if (deadline > vp[i].first)
      ans = "No";
  }
  cout << ans << endl;
}