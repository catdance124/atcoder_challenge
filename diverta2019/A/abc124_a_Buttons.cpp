// https://atcoder.jp/contests/abc124/tasks/abc124_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int A, B;
  cin >> A >> B;
  int coins = 0;
  for (int i = 0; i < 2; i++){
    if (A > B){
      coins += A;
      A--;
    }else{
      coins += B;
      B--;
    }
  }
  cout << coins << endl;
}