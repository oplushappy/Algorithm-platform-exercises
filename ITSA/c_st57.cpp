#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s;
  cin>>s;
  string temp = "";
  temp += s;
  reverse(s.begin(),s.end());
  if(s == temp){
    cout<<"yes"<<endl;
  } else {
    cout<<"no"<<endl;
  }
  return 0;
}