#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool mycmp(const pair<int, int> & v1, const pair<int, int>& v2) {
  if(v1.second < v2.second) {
    return v1.second < v2.second;
  } else if(v1.second == v2.second) {
    return v1.first < v2.first;
  } else {
    return v1.second < v2.second;
  }
}
int main() {
  int num;
  cin >> num;
  vector<int> v(num);
  for(auto &e : v) cin >> e;
  vector<pair<int, int>> v2;
  for(int i = 0; i < v.size(); i++) {
    string tmp = to_string(v[i]);
    int total = 0;
    for(int j = 0; j < tmp.size(); j++) {
      total += (tmp[j] - '0');
    }
    v2.push_back(make_pair(v[i], total));
  }
  sort(v2.begin(), v2.end(), mycmp);
  for(int i = 0; i < v2.size(); i++) {
    if(i == v2.size() - 1) {
      cout << v2[i].first << "\n";
    } else {
      cout << v2[i].first << " ";
    }
  }
  return 0;
}