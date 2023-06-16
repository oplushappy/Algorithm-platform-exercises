#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <cctype>
using namespace std;

void split(string s, vector<string>& v) {
  int current = 0;
  int next;
  while(1) {
    next = s.find_first_of(" ,.", current);
    if(next != current) {
      string tmp = s.substr(current, next-current);
      if(tmp.size() != 0) {
        v.push_back(tmp);
      }
    }
    if(next == string::npos) break;
    current = next + 1;
  }
}

int main() {
  string str;
  vector<string> v;
  map<char, int> mp;
  while(getline(cin, str)){
    split(str, v);
    for(int i = 0; i < v.size(); i++) {
      for(int j = 0; j < v[i].size(); j++) {
        char tmp2 = v[i][j];
        tmp2 = tolower(tmp2);
        if(find(mp.begin(), mp.end(), tmp2) != mp.end()) {
          mp[tmp2] += 1;
        } else {
          mp[tmp2] = 1;
        }
      }
    }
    cout << v.size() << "\n";
    for(auto it = mp.begin(); it != mp.end(); it++) {
      cout<< it->first << " : " << it->second << "\n";
    }
  }
  return 0;
}