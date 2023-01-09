#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  string s;
  vector<string> vec;
  while((cin>>s) && !cin.eof()) {
    vec.push_back(s);
  }
  for(auto ss:vec) {
    for(int  i = 0; i < ss.size(); i++) {
      if(i == 0) {
        cout<<ss[i];
        continue;
      }
      cout<<"   "<<ss[i];
    }
    cout<<endl;
  }
  return 0;
}