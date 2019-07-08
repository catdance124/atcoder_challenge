// https://atcoder.jp/contests/abc128/tasks/abc128_b
#include <bits/stdc++.h>
using namespace std;

struct Data{
  string S;
  int P;
  int index;

  // 最後のconstを忘れると"instantiated from here"というエラーが出てコンパイルできないので注意
  bool operator<(const Data &right) const
  {
    return S == right.S ? P > right.P : S < right.S;
  }
};

int main(void){
  int N;
  cin >> N;

  vector<Data> d(N);
  for (int i = 0; i < N; i++){
    string s;
    int P;
    cin >> s >> P;
    d[i].S = s;
    d[i].P = P;
    d[i].index = i+1;
  }
  sort(d.begin(), d.end());

  for (int i = 0; i < N; i++){
    cout << d[i].index << endl;
  }
}