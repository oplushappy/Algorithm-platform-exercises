#include<iostream>
#include <vector>
using namespace std;

int main() {
  int n1,n2;
  vector<int> vec;
  while(cin>>n1 && !cin.eof()){
    cin>>n2;
    vec.push_back((n1+n2));
  }
  for(auto it:vec) {
    cout<<it<<endl;
  }
  return 0;
}