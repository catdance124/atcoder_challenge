// https://atcoder.jp/contests/abc141/tasks/abc141_a
#include <bits/stdc++.h>
using namespace std;

int main(void){
  string today;
  cin >> today;
  string tommorow;
  if (today == "Sunny"){
    tommorow = "Cloudy";
  }else if (today == "Cloudy"){
    tommorow = "Rainy";
  }else{
    tommorow = "Sunny";
  }
  cout << tommorow << endl;
}