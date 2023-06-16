#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> v(10), v2(10), v3(10);
  for(auto &e : v) cin >> e;
  // for(auto &e : v) cout << e << " ";
  for(int i = 0; i < 10; i++) {
    int tmp = 0;
    for(int j = 0; j <= i; j++) {
      if(v[j] == "X" || v[j] == "x") v[j] = "10";
      tmp += stoi(v[j]);
    }
    v2[i] = to_string(tmp);
  }
  // for(auto &e : v2) cout << e << " ";
  for(int i = 0; i < 10; i++) {
    int tmp = 0;
    for(int j = 0; j <= i; j++) {
      // if(v2[j] == "X") v[j] = 10;
      tmp += stoi(v2[j]);
    }
    v3[i] = to_string(tmp);
  }
  // for(auto &e : v3) cout << e << " ";
  // int sum = 0;
  // for(auto &e : v3) {
  //   sum += stoi(e);
  // }
  if(stoi(v3[9]) % 11 == 0) {
    cout <<"YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
  return 0;
}