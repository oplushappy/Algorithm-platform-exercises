#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 , str2;
  while(cin >> str1 >> str2) {
    size_t found = 0;
    int count = 0;
    do {
      found = str2.find(str1, found);
      if(found != string::npos) {
        count += 1;
        found += 1;
      }
    } while(found != string::npos);
    cout << count << "\n";
  }
  return 0;
}