#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2;
  while(getline(cin, s1)) {
    getline(cin, s2);
    size_t found = 0;
    found = s1.find(s2, found);
    if(found != string::npos) {
      cout << found << "\n";
    } else {
      cout << -1 << "\n";
    }
  }
  return 0;
}