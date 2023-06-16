#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string s, s1, s2;
  while(getline(cin, s)) {
    vector<char> v1, v2;
    size_t found = s.find(",", 0);
    s1 = s.substr(0, found - 0);
    s2 = s.substr(found+2);
    // cout << s1 << "\t" << s2 << "\n";
    for(int i = 0; i < s1.size(); i++) {
      if(s1[i] == ' ') continue;
      if(find(v1.begin(), v1.end(), tolower(s1[i])) == v1.end()) {
        v1.push_back(tolower(s1[i]));
      }
    }

    for(int i = 0; i < s2.size(); i++) {
      if(s2[i] == ' ') continue;
      if(find(v2.begin(), v2.end(), tolower(s2[i])) == v2.end()) {
        v2.push_back(tolower(s2[i]));
      }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if(v1 == v2) {
      cout << 1 << "\n";
    } else {
      cout << -1 << "\n";
    }

  }
  return 0;
}