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
      cout << temp << " is a palindrome." << "\n";
    } else {
      cout << temp << " is not a palindrome." << "\n";
    }
  }
  return 0;
}