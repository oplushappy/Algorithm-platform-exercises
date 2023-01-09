#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int total;
  cin>>total;
  getchar();
  string s;
  vector<string> vec[total];
  vector<vector<int>> vec2(total,vector<int>(26,0));
  vector<vector<int>> vec3(total,vector<int>(26,0));
  vector<int> num(total, 0);
  for(int i = 0; i < total; i++) {
    // while(cin>>s){
    //   if(s != "," && s!= ".") vec[i].push_back(s);
    //   if(getchar() == '\n') break;
    // }
    getline(cin,s);
    s += " ";
    string sss= "";
    int count = 0;
    for(int j = 0; j < s.size(); j++) {
      if(s[j] == ' ' || s[j] == '\n'){
        if(sss == "") continue;
        vec[i].push_back(sss);
        sss = "";
        continue;
      } else if(s[j] == ',' || s[j] == '.') {
        continue;
      }
      sss += s[j];
    }
  }
  // i represents which line
  for(int i = 0; i < total; i++) {
    for(auto it = vec[i].begin(); it!=vec[i].end(); it++) {
      string ss;
      ss = *it;
      for(int j = 0; j < ss.size(); j++) {
        if (65 <= int(ss[j]) && int(ss[j]) <= 90 ) {
          vec3[i][ss[j] - 'A']++;
        } else if(97 <= int(ss[j]) && int(ss[j]) <= 122) {
          vec2[i][ss[j] - 'a']++;
        } 
      }
    }
    num[i] = vec[i].size();
  }
  for(int i = 0; i < total; i++) {
    cout<<num[i]<<endl;
    for(int j = 0; j < 26; j++) {
      if(vec3[i][j] != 0) {
        cout<<char('A' + j)<<" "<<":"<<" "<<vec3[i][j]<<endl;
      }
      if(vec2[i][j] != 0) {
        cout<<char('a' + j)<<" "<<":"<<" "<<vec2[i][j]<<endl;
      }
    }
  }
  return 0;
}