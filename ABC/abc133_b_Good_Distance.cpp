// https://atcoder.jp/contests/abc133/tasks/abc133_b
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, D;
  cin >> N >> D;
  int X[N][D];
  for (int i = 0; i < N; i++){
    for (int j = 0; j < D; j++){
      cin >> X[i][j];
    }
  }

  int count = 0;
  for (int i = 0; i < N-1; i++){
    for (int j = i+1; j < N; j++){
      double d = 0;
      for (int k = 0; k < D; k++){
        d += pow(X[i][k] - X[j][k], 2);
      }
      d = sqrt(d);
      if (ceil(d) == floor(d)){
        count++;
      }
    }
  }

  cout << count << endl;
}