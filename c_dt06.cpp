#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
  stack<string> st;
  char a;
  int total;
  cin>>total;
  vector<string> vec[total];
  for(int j = 0; j < total; j++) {
    string str[50];
    string temp;
    int count = 0;
    while(1) {
      cin>>temp;
      a = getchar();
      str[count++] = temp;
      if(a == '\n') break;
    } 
    for(int i = 0; i < 50; i++) {
      if(str[i] == "") break;
      if(str[i] == "+" || str[i] == "-") {
        if(st.empty()) {
          st.push(str[i]);
        } else if(st.top() == "+" || st.top() == "-") {
          vec[j].push_back(st.top());
          st.pop();
          st.push(str[i]);
        } else if(st.top() == "*" || st.top() == "/") {
          // cout<<st.top()<<" ";
          vec[j].push_back(st.top());
          st.pop();
          st.push(str[i]);
        } else if(st.top() == "(") {
          st.push(str[i]);
        }
      } else if(str[i] == "*" || str[i] == "/") {
        if(st.empty()) {
          st.push(str[i]);
        } else if(st.top() == "+" || st.top() == "-") {
          st.push(str[i]);
        } else if(st.top() == "*" || st.top() == "/") {
          // cout<< st.top()<<" ";
          vec[j].push_back(st.top());
          st.pop();
          st.push(str[i]);
        } else if(st.top() == "(") {
          st.push(str[i]);
        }
      } else if(str[i] == "(") {
        st.push(str[i]);
      } else if(str[i] == ")") {
        while(st.top() != "(") {
          // cout<< st.top()<<" ";
          vec[j].push_back(st.top());
          st.pop();
        }
        st.pop();
      } else {
        // cout<<str[i]<<" ";
        vec[j].push_back(str[i]);
      }
    }
    while(!st.empty()) {
      vec[j].push_back(st.top());
      st.pop();
    }
  }
  for(int j = 0; j < total; j++) {
    vector<string>:: iterator iter;
    for(iter = vec[j].begin(); iter != vec[j].end(); iter++) {
      if(iter == vec[j].begin()) {
        cout<<*iter;
        continue;
      }
      cout<<" "<<*iter;
    }
    cout<<endl;
  }
  return 0; 
}