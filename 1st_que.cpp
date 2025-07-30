#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main() {
  int num;
  cout << "enter number" << endl;
  cin >> num;
  string str = to_string(num);
  reverse(str.begin() , str.end());
  int ans = stoi(str);
  cout << ans << endl;
}
