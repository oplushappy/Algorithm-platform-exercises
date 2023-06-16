#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int num;
  getline(cin , s);
  cin >> num;

  for(int i = 0; i < s.size() ; i++) {
    if(65 <= s[i] && s[i] <= 90) {
      // s[i] += num;
      // if(s[i] > 90) s[i] -= 26;
      s[i] = (s[i] - 'A' + num) % 26 + 'A';
    } else if(97 <= s[i] && s[i] <= 122) {
      // s[i] += num;
      // if(s[i] > 122) s[i] -= 26;     
      s[i] = (s[i] - 'a' + num) % 26 + 'a';
    } else if(48 <= s[i] && s[i] <= 57) {
      // s[i] += num;
      // if(s[i] > 57) s[i] -= 10;   
      s[i] = (s[i] - '0' + num) % 10 + '0'; 
    }
  }
  cout << s << "\n";
  return 0;
}