#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int total;
  cin>>total;
  // getchar(); //scanf enter
  string s[total];
  for(int i = 0; i < total; i++) {
    // getline(cin,s[i]);
    cin>> s[i];
    reverse(s[i].begin(),s[i].end());
  }
  for(int i = 0; i < total; i++) {
      cout<<s[i]<<endl;
  }
  return 0;
}