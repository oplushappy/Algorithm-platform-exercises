#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const vector<int> &a,const vector<int> &b){
  return a[1] < b[1];
}
int main() {
  int total;
  string s;
  cin>>total;
  vector<vector<int>> vec(total, vector<int>(2,0));
  for(int i = 0; i < total; i++) {
    cin>>s;
    int amount = 0;
    for(int j = 0; j < s.size(); j++) {
      amount += (s[j] - '0');
    }
    vec[i][0] = stoi(s);
    vec[i][1] = amount; 
  }
  sort(vec.begin(),vec.end(), cmp);
  // sort(vec.begin(),vec.end(), [](vector<int>a,vector<int>b){return a[1]<b[1]});
  for(int i = 0; i < total-1; i++) {
    if(vec[i][1] == vec[i+1][1]) {
      if(vec[i][0] > vec[i+1][0]) {
        swap(vec[i][0],vec[i+1][0]);
      }
    }
  }
  for(int i = 0; i < total; i++) {
    if(i == 0){
      cout<<vec[i][0];
      continue;
    }
    cout<<" "<<vec[i][0];
  }
  cout<<endl;
  return 0;
}
