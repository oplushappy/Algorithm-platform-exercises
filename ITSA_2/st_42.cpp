#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2;
  while(cin >> s1 >> s2) {
    size_t found = 0;
    int total = 0;
    do{
      found = s2.find(s1, found);
      if(found != string::npos) {
        total += 1;
        found += 1;
      } 
    } while(found != string::npos);
    cout << total << "\n";
  }
  return 0;
}