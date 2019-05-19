// https://atcoder.jp/contests/abc126/tasks/abc126_b
#include <bits/stdc++.h>
using namespace std;

int main(void){
  string S;
  cin >> S;
  string ans;

  int s01 = stoi(S.substr(0, 2));
  int s23 = stoi(S.substr(2, 2));
  bool s01f = false;
  bool s23f = false;

  if (0 < s01 && s01 < 13)
    s01f = true;
  if (0 < s23 && s23 < 13)
    s23f = true;
  
  if (s01f && s23f)
    ans = "AMBIGUOUS";
  else if (s01f)
    ans = "MMYY";
  else if (s23f)
    ans = "YYMM";
  else
    ans = "NA";
    
  cout << ans << endl;
}