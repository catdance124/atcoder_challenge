// https://atcoder.jp/contests/m-solutions2019/tasks/m_solutions2019_b
#include <bits/stdc++.h>
using namespace std;

int main(void){
  string s;
  cin >> s;
  int win = 0;
  int rest = 15 - s.size();

  for (int i = 0; i < s.size(); i++){
    if (s[i] == 'o')
      win++;
  }
  string ans = (win + rest >= 8) ? "YES" : "NO";

  cout << ans << endl;
}