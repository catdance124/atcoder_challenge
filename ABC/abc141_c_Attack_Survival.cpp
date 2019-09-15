// https://atcoder.jp/contests/abc141/tasks/abc141_c
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> members(N, K);
  for (int i = 0; i < Q; i++){
    int A;
    cin >> A;
    members[A-1] += 1;
  }

  for (int i = 0; i < N; i++){
    string ans = "Yes";
    if (members[i] <= Q){
      ans = "No";
    }
    cout << ans << endl;
  }
}