#include <iostream>
#include <string>
using namespace std;

int main() {
  int row;
  cin >> row;
  // getchar();
  cin.ignore();
  for(int i = 0; i < row; i++) {
    // string s;
    // getline(cin, s);
    // int total = 0;
    // for(int i = 0; i < s.size(); i++) {
    //   total += s[i];
    // }
    char ch;
    int total = 0;
    while((ch = getchar()) != '\n') {
      // if(ch == ' ') continue;
      total += (int)ch;
      // cout << (int)ch << " ";
    }
    cout << total << "\r\n";
  }
  return 0;
}