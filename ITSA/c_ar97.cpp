#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int r1,c1;
  cin>>r1>>c1;
  int temp = 0;
  vector<vector<int>> vec(r1, vector<int>(c1,0));
  for(int i = 0; i < r1; i++) {
    for(int j = 0; j < c1; j++) {
      cin>>temp;
      vec[i][j] = temp;
    }
  }
  vector<vector<int>> vec2(r1, vector<int>(c1,0));
  for(int i = 0; i < r1; i++) {
    for(int j = 0; j < c1; j++) {
      cin>>temp;
      vec2[i][j] = temp;
    }
  }
  for(int i = 0; i < r1; i++) {
    for(int j = 0; j < c1; j++) {
      vec[i][j] *= vec2[i][j];
    }
  }
  for(int i = 0; i < r1; i++) {
    for(int j = 0; j < c1; j++) {
      if(j == 0) {
        cout<<vec[i][j];
        continue;
      }
      cout<<" "<<vec[i][j];
    }
    cout<<endl;
  }
  return 0;
}