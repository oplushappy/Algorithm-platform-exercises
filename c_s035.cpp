#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
  vector<int> vec = {1, 6, 9, 23, 56, 95};
  int n;
  cin>>n;
  vec.push_back(n);
  sort(vec.begin(), vec.end(), less<int>());
  int turn = 0;
  for(auto it:vec) {
    if(turn == 0) {
      cout<<it;
      turn++;
      continue;
    }
    cout<<','<<it;
  }
  cout<<endl;
  return 0;
}