// https://atcoder.jp/contests/abc126/tasks/abc126_c
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, K;
  cin >> N >> K;
  long double prob = 0.0;

  for (int i = 1; i < N + 1; i++){
    int P = i;
    int count = 0;
    while(P < K){
      P *= 2;
      count++;
    }
    prob += (1.0/N * pow(1.0/2.0, count));
  }

  cout << fixed << setprecision(12) << prob << endl;
}