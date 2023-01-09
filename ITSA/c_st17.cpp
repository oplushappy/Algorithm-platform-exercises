#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string s;
  vector<int> vec;
  while((cin>>s) && !cin.eof()) {
    string temp = "";
    temp += s;
    reverse(s.begin(),s.end());
    if(s == temp){
      vec.push_back(1);
    } else {
      vec.push_back(0);
    }
    s = "";
  }
  for(auto it:vec){
    if(it) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}