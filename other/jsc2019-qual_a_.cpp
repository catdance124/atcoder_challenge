// https://atcoder.jp/contests/jsc2019-qual/tasks/jsc2019_qual_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int M,D;
  cin >> M >> D;
  int num=0;
  for (int i = 1; i <= M; i++){
    for (int j = 1; j <= D; j++){
      int d1 = j % 10;
      int d10 = j / 10;
      if (i==d1*d10 && d1>1 && d10>1){
        num++;
      }
    }
  }

  cout << num << endl;
}