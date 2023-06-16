#include <iostream>
using namespace std;

int main() {
  string str;
  while(getline(cin, str)) {
    string tmp = "";
    for(int i = 0; i < str.size(); i += 3) {
      tmp += str[i];
    }
    cout << tmp << "\n";
  }
  return 0;
}