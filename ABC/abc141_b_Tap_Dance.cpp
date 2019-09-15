// https://atcoder.jp/contests/abc141/tasks/abc141_b
#include <bits/stdc++.h>
using namespace std;

int main(void){
  string S;
  cin >> S;
  string N = "UHFYEEF";
  string ans = "Yes";
  for (int i = 0; i < S.size(); i++){
    string temp;
    if (i % 2 == 0){
      temp = "RUD";
    }else{
      temp = "LUD";
    }
    if (temp.find(S[i]) == std::string::npos){
      ans = "No";
    }
  }

  cout << ans << endl;
}