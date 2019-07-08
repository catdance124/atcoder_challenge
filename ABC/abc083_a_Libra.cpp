// https://atcoder.jp/contests/abc083/tasks/abc083_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  int L = A + B;
  int R = C + D;

  if(L>R)
    cout << "Left" << endl;
  else if (L<R)
    cout << "Right" << endl;
  else
    cout << "Balanced" << endl;
}