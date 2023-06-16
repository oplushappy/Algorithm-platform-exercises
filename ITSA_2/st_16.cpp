#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  while(cin >> s) {
    string tmp = "";
    for(int i = 0; i < s.size(); i++) {
      tmp += s[i];
      if(i != s.size() - 1) {
        tmp += "   ";
      }
    }
    cout << tmp << "\n";
  }
  return 0;
}