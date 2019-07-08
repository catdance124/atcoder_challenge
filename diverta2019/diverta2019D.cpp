// https://atcoder.jp/contests/diverta2019/tasks/diverta2019_d
#include <bits/stdc++.h>
using namespace std;

vector<long long> divisors(long long n){
  vector<long long> res;
  for(long long i = 1; i*i <= n; ++i) {
    if(n % i != 0) continue;
    res.push_back(i);
    if(n/i == i) continue;
    res.push_back(n/i);
  }
  return res;
}

int main(void){
  long long N;
  cin >> N;
  vector<long long> divs = divisors(N);

  long long sum = 0;
  for (int i = 0; i < divs.size(); i++){
    if (divs[i] > 1)
      if ((N / (divs[i] - 1)) == (N % (divs[i] - 1)))
        sum += divs[i] - 1;
  }

  cout << sum << endl;
}