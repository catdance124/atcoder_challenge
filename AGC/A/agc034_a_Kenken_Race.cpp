// https://atcoder.jp/contests/agc034/tasks/agc034_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, A, B, C, D;
  cin >> N >> A >> B >> C >> D;
  string S;
  cin >> S;
  int road[N];
  for (int i = 0; i < N; i++){
    if (S[i]=='.')  road[i] = 0;
    else  road[i] = 1;
  }

  string ans;
  if (C<D){
    ans = "Yes";
    for (int i = A-1; i < D; i++){
      if (road[i]==1 && road[i+1]==1)
        ans = "No";
    }
  }else{
    ans = "No";
    for (int i = B-1; i < D; i++){
      if (road[i-1]==0 && road[i]==0 && road[i+1]==0)
        ans = "Yes";
    }
    for (int i = A-1; i < C; i++){
      if (road[i]==1 && road[i+1]==1)
        ans = "No";
    }
  }

  cout << ans << endl;
}