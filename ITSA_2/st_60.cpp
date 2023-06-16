#include <iostream>
#include <string>
#include <regex>
#include <algorithm>
using namespace std;

int main() {
  string s;
  smatch match;
  regex re("\\d+");
  // while(getline(cin, s)) {
    getline(cin, s);
    string::const_iterator iters = s.begin();
    string::const_iterator itere = s.end();
    vector<string> v;
    while(regex_search(iters, itere, match, re)) {
      // string temp = match[0];
      // cout << match[0] << " ";
      v.push_back(match[0]);
      iters = match[0].second;
    }
    int total = 0;
    for(int i = 0; i < v.size(); i++) {
      string tmp = v[i];
      reverse(tmp.begin(), tmp.end());
      total += stoi(tmp);
    }
    cout << total << "\n";
  // }
  return 0;
}