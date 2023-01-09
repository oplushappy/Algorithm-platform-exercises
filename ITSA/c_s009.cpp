#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <sstream>
using namespace std;
int main(){
  vector<int> vec[1000];
  string s;
  int count = 0;
  while((cin>>s) && !cin.eof()) {
    for(int i = 0; i < s.size(); i++) {
      int b = (s[i] - '0');
      vec[count].push_back(b);
      sort(vec[count].begin(), vec[count].end(), greater<int>());
    }
    count++;
  }
  for(int i = 0; i <count; i++) {
    for(int j = 0; j < vec[i].size(); j++) {
      cout<<vec[i][j];
    }
    cout<<endl;
  }
  return 0;
}