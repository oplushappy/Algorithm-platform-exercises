#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2, s3;
  while(getline(cin, s1)) {
    getline(cin, s2);
    getline(cin, s3);
    // cin >> s2 >> s3;
    size_t found = 0;
    do{
      found = s1.find(s2, found);
      if(found != string::npos) {
        s1.replace(found, s2.size(), s3);
        found += 1;
      } 
    } while(found != string::npos);
    cout << s1 << "\n";
  }
  return 0;
}