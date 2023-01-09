#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s;
  cin>>s;
  vector<int> vec(129,0);
  for(int i = 0; i < s.size(); i++) {
    vec[int(s[i])]++;
  }
  for(int i = 129; i > 30 ; i--) {
    if(vec[i] != 0) cout<<i<<" "<<vec[i]<<endl;
  }

  return 0;
}