// https://atcoder.jp/contests/abc125/tasks/abc125_c
#include <bits/stdc++.h>
using namespace std;

int get_gcd(int a, int b){
  if (b>a)
    swap(a, b);
  if (b == 0)
      return a;
  return get_gcd(b, a % b);
}

int fukusu_gcd(vector<int> array, int max_gcd){
  int gcd = array.at(0);
  for (int i = 1; i < array.size(); i++)
    gcd = get_gcd(gcd, array.at(i));
    if (max_gcd < gcd)
  return gcd;
}

template<typename T>
void remove(std::vector<T>& vector, unsigned int index){
    vector.erase(vector.begin() + index);
}

int main(void)
{
  int N;
  cin >> N;

  vector<int> array(N);
  for (int i = 0; i < N; i++)
    cin >> array.at(i);

  int max_gcd = 1;
  for (int ignore = 0; ignore < N; ignore++){
    vector<int> tmp(N);
    tmp = array;
    remove(tmp, ignore);
    max_gcd = max(max_gcd, fukusu_gcd(tmp, max_gcd));
  }
  cout << max_gcd << endl;
}