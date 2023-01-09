#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  stack<char> st;
  string str;
  cin>>str;
  for(int j = 0; j < str.size(); j++) {
    if(str[j] == ')'){
      if(st.empty()){
        cout<<"No"<<endl;
        return 0;
      }
      st.pop();
    } else {
      st.push(str[j]);
    }
  } 
  if(st.empty()){
    cout<<"Yes"<<endl;
  } else {
    cout<<"No"<<endl;
  }
  return 0;
}