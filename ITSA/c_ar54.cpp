#include <iostream>
#include <vector>
using namespace std;

int main() {
  int total;
  vector<int> vec(26,0);
  cin>>total;
  char s;
  for(int i = 0; i < total; i++) {
    cin>>s;
    vec[s-'a']++;
  }
  for(int i = 0; i < 26; i++) {
    if(vec[i] != 0) {
      cout<<char('a'+ i)<<" "<<vec[i]<<endl;
    }
  }
  return 0;
}