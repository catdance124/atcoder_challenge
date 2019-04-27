// https://atcoder.jp/contests/abc114/tasks/abc114_c
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  cin >> N;
  int f3 = 0, f5 = 0, f7 = 0;

  for (int i = 1; i < N; i++){
    string str_n = i;
    if(N.at(i)=='3')
      f3++;
    if(N.at(i)=='5')
      f5++;
    if(N.at(i)=='7')
      f7++;
  }

  if(f3 && f5 && f7)
    cout << 
}