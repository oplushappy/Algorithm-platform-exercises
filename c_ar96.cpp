#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int action;
  cin>>action;
  int dim;
  cin>>dim;
  string s;
  getchar();
  getline(cin,s);

  vector<vector<char>> vec(dim,vector<char>(dim,' '));
  int count = 0;
  for(int i = 0; i < dim; i++){
    for(int j = 0; j < dim; j++){
      if(count == s.size()) break;    
      vec[i][j] = s[count++];
    }
  }
  string ss = "";
  if(action == 0) {
    for(int i = 0; i < dim; i++){
      for(int j = 0; j < dim; j++){  
        char sss = vec[j][i];  
        ss += sss;
      }
    }
  } else if(action == 1) {
    for(int i = 0; i < dim; i++){
      for(int j = 0; j < dim; j++){    
        char sss = vec[i][j];  
        ss += sss;
      }
    }
  }
  ss.erase(0,ss.find_first_not_of(" "));
  if(ss.find_last_of(" ") > ss.find_last_not_of(" ")) {
    ss.erase(ss.find_last_not_of(" "),ss.find_last_of(" "));
  }
  cout<<ss<<endl;
  return 0;
}