#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  int n1;
  vector<int> vec;
  while(cin>>n1 && !cin.eof()){
    vec.push_back(n1);
  }
  for(auto it:vec) {
    cout<<it<<" "<<pow(it,2)<<" "<<pow(it,3)<<endl;
  }
  return 0;
}