#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  string tmp = "";
  while(getline(cin, s)) {
    for(int i = 0; i < s.size(); i++) {
      if(s[i] != 32 && s[i] != 9) {
        tmp += s[i];
        // if(i == s.size() - 1) {
        //   cout << s[i] << "\n";
        // } else {
        //   cout << s[i];
        // }
      } 
    }
    cout << tmp << endl;
  }

  return 0;
}