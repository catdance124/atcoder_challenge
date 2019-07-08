// https://atcoder.jp/contests/abc126/tasks/abc126_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, K;
  string S;
  cin >> N >> K >> S;
  K = K - 1;

  if (S[K] == 'A')
    S[K] = 'a';
  else if (S[K] == 'B')
    S[K] = 'b';
  else if (S[K] == 'C')
    S[K] = 'c';

  cout << S << endl;
}