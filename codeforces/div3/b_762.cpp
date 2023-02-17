#include<bits/stdc++.h>
using namespace std;
void solve() {
  int t;
  cin >> t;
  set<int> s;
  for(int i = 1; i * i <= t; i++) {
    s.insert(i * i);
  }
  for(int i = 1; i * i * i <= t; i++) {
    s.insert(i * i * i);
  }
  cout << s.size() << "\n";
}
int main() {
  int tt;
  cin >> tt;
  while(tt--)
    solve();
  return 0;
}