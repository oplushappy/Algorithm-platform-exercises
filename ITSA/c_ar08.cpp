#include<iostream>
#include<string>
using namespace std;
int main() {
  string s;
  cin>>s;
  string temp ="";
  int number = 0;
  int result = 0;
  for(int i = 0; i < s.size(); i++) {
    for(int j = s.size()-1; j >= i; j--) {
      temp = s.substr(i, j-i+1);
      number = stoi(temp);
      int judge = 0;
      for(int i = 2; i < number-1; i++){
        if(number%i == 0) {
          judge++;
        }
      }
      if(judge == 0) {
        if(number > result) {
          result = number;
        }
      }
    }
  }
  if(result > 0) {
    cout<<result<<endl;
  } else {
    cout<<"No prime found"<<endl;
  }
  return 0;
}