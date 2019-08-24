// https://atcoder.jp/contests/jsc2019-qual/tasks/jsc2019_qual_b
#include <bits/stdc++.h>
using namespace std;
 
int main(void){
  long long N, K;
  cin >> N >> K;
  int A[N];
  for (int i = 0; i < N; i++) cin >> A[i];

  long long T_in = 0;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      if (A[i] < A[j]){
        T_in += 1;
      }
    }
  }

  long long T_fw = 0;
  for (int j = 0; j < N; j++){
    for (int i = 0; i < j; i++){
      if (A[i] > A[j]){
        T_fw += 1;
      }
    }
  }

  long long ans = T_in * K*(K-1)/2 + T_fw * K;
  int w = int(pow(10, 9)) + 7;
  cout << ans%w << endl;
}