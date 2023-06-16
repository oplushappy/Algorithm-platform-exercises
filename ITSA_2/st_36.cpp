#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool Is_Re(string s) {
  string tmp = s;
  reverse(s.begin(), s.end());
  if(tmp == s) return true;
  else false;
}

int main() {
  string s;
  while(cin >> s) {
    while(!Is_Re(s)) {
      
    }
  }
  return 0;
}