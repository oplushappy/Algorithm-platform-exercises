#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
  int temp = 0;
  vector<vector<float>> vec(2, vector<float>(2,0));
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      cin>>temp;
      vec[i][j] = temp;
    }
  }
  int det = int(vec[0][0] * vec[1][1] - vec[0][1] * vec[1][0]);
  float temp2 = vec[0][0];
  vec[0][0] = vec[1][1];
  vec[1][1] = temp2;
  vec[0][1]  *= (-1);
  vec[1][0]  *= (-1);

  // for(int i = 0; i < 2; i++) {
  //   for(int j = 0; j < 2; j++) {
  //     if(j == 0) {
  //       cout<<vec[i][j];
  //       continue;
  //     }
  //     cout<<" "<<vec[i][j];
  //   }
  //   cout<<endl;
  // }
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      if(int(vec[i][j]) % det != 0) {
        float f = vec[i][j] / det;
        cout<< setprecision(2) << f;
      } else {
        cout<<int(vec[i][j]) / det;
      }
      if(j == 0) cout<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}