#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string str;
  while(cin>>str) {

    bool ok = true;
    // string temp = str;
    reverse(str.begin(), str.end());
    for(int i = 0; i < str.size(); i++) {
      if(65 <= str[i] && str[i] <= 90) {
        str[i] += 32;
      } else if(97 <= str[i] && str[i] <= 122) {
        str[i] -= 32;
      }
    }
    cout<<str<<"\n";
  }
  return 0;
}