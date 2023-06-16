#include <iostream>
#include <numeric>
#include <string>
#include <algorithm>
// #include <cstdio>
// #include <cstdlib>
using namespace std;

string intToA(int num, int radix) {
  string res = "";
  do{
    int t = num % radix;
    if(t >= 0 && t <= 9) {
      res += (t + '0');
    } else {
      res += (t + 'A' - 10);
    }
    num /= radix;
  } while(num);
  reverse(res.begin(), res.end());
  return res;
}


int main() {
  int radix , num;
  while(cin >> radix >> num) {
    string res = intToA(num, radix);
    cout << res << "\n";
    // char arr[INT8_MAX];
    // itoa(num, arr, radix);
    // for(int i = 0; i < strlen(arr) ; i++) {
    //   if(97 <= arr[i] && arr[i] <= 122) {
    //     arr[i] -= 32;
    //   }
    // }
    // cout << arr << "\n";
    // printf("%s\n", arr);
  }
  return 0;
}