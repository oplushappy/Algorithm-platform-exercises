#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int r1,r2,c1,c2;
  cin>>r1>>c1;
  int temp = 0;
  vector<vector<int>> vec(r1, vector<int>(c1,0));
  for(int i = 0; i < r1; i++) {
    for(int j = 0; j < c1; j++) {
      cin>>temp;
      vec[i][j] = temp;
    }
  }
  cin>>r2>>c2;
  for(int i = 0; i < r2; i++) {
    for(int j = 0; j < c2; j++) {
      cin>>temp;
      vec[i][j] += temp;
    }
  }

  for(int i = 0; i < r2; i++) {
    for(int j = 0; j < c2; j++) {
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