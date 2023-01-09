#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const vector<int> &a,const vector<int> &b){
  return a[0] > b[0];
}
int main() {
  int total;
  cin>>total;
  vector<vector<int>> vec(total, vector<int>(3,0));
  for(int i = 0; i < total; i++) {
    int math, eng, id;
    cin>>id>>math>>eng;
    vec[i][0] = math;
    vec[i][1] = eng; 
    vec[i][2] = id;
  }
  sort(vec.begin(),vec.end(), cmp);
  for(int i = 0; i < total-1; i++) {
    if(vec[i][0] == vec[i+1][0]) {
      if(vec[i][1] < vec[i+1][1]) {
        swap(vec[i][0],vec[i+1][0]);
      }
      if(vec[i][1] == vec[i+1][1]) {
        if(vec[i][2] > vec[i+1][2]) {
          swap(vec[i][0],vec[i+1][0]);
        }
      }
    }
  }
  for(int i = 0; i < total; i++) {
    cout<<vec[i][2]<<" "<<vec[i][0]<<" "<<vec[i][1]<<endl;
  }
  return 0;
}