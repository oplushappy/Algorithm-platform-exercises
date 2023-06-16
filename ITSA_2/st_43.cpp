#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  string s, s1, s2;
  while(cin>>s) {
    size_t found = s.find('e' | 'E', 0);
    if(found != string::npos) {
      s1 = s.substr(0, found);
      s2 = s.substr(found + 1);
      // cout << stof(s1) << " " << pow(10, stoi(s2)) << "\n";
      // cout.setf(ios::fixed,ios::floatfield);
      double f= stof(s1) * pow(10, stoi(s2));
      cout.setf(ios::fixed,ios::floatfield);
      cout <<  f << "\n";
    } else {
      cout << s << "\n";
    }
  }
  return 0;
}