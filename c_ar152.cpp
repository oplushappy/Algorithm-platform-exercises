#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int,int> m;
  int total,l;
  cin>>total>>l;
  int temp;
  for(int i = 0; i < total; i++) {
    cin>>temp;
    auto iter = m.find(temp);
    if(iter != m.end()) {
      m[temp]++;
    } else {
      m[temp] = 1;
    }
  }
  for(const auto& s: m) {
    if(s.second >= l){
      cout<<s.first<<","<<s.second<<endl;
    }
  }
  return 0;
}