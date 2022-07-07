#include<bits/stdc++.h>
using namespace std;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}

string removeChar(string s){
  static string ans;
  if(s.size() == 0) return ans;
  if(s[0]!='a') ans+=s[0];
  return removeChar(s.substr(1));
}

int main(){

  string s = "safiqul islam uzzal";
  string ss = removeChar(s);
  cout<<ss<<endl;

  return 0;
}
