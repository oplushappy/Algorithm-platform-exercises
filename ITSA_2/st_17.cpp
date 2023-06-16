#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string str;
  while(cin>>str) {

    bool ok = true;
    string temp = str;
    reverse(str.begin(), str.end());
    ok = (str == temp);
    if(ok) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
  return 0;
}