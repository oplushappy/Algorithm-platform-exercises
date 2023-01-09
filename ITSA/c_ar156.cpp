#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  string s;
  cin>>s;
  int b = s.size();
  string ss = s;
  reverse(s.begin(),s.end());
  if(s != ss) {
    printf("FALSE\n");
    return 0;
  }else if((s[b-1] - '0') % 2 == 0){
    printf("FALSE\n");
    return 0;
  }else if(b > 5) {
    printf("FALSE\n");
    return 0;
  } else if(stoi(s) > INT16_MAX) {
    printf("FALSE\n");
    return 0;
  } else if(s.find('0') != s.npos) {
    printf("FALSE\n");
    return 0;
  }
  printf("TRUE\n");
  return 0;
}