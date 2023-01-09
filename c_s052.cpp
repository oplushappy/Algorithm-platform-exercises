#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  vector<int> vec;
  cin>>t;
  int n;
  for(int i = 0; i < t; i++) {
    cin>>n;
    vec.push_back(n);
  }
  for(int p =vec.size(); p >= 0; p--) {
    for(int i = 0; i < p - 1; i++) {
      if(vec[i] < vec[i+1]) swap(vec[i],vec[i+1]);
    }
  }

  for(int i =0; i < vec.size(); i++) {
    cout<<i+1<<" "<<vec[i]<<endl;
  }
  
  return 0;
}