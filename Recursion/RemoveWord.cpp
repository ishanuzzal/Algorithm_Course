#include<bits/stdc++.h>
using namespace std;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}

bool fullCheck(string s, string s2){
    if(s==s2) return true;
    for(int i=0; i<s2.size(); i++){
      if(s[i]!=s2[i]) return false;
    }
    return true;
}

string findWord(string s1, string s2){
  static string str;
  if(s1.size()==0){
    return str;
  }
  if(s2[0]==s1[0]){
    if(fullCheck(s1.substr(1),s2.substr(1))){
      return findWord(s1.substr(s2.size()),s2);
    }
  }
  str+=s1[0];
  return findWord(s1.substr(1),s2);
}

/*string findWord(string s1,string s2,string s){
  if(s1.size()==0) return s;
  if(s1[0]==s2[0]){
    if(fullCheck(s1.substr(1), s2.substr(1))) return findWord(s1.substr(s2.size()),s2,s);
  }
  s+=s1[0];
  return findWord(s1.substr(1),s2,s);
}*/


int main(){

  string s = "lovelyappleinthetree";
  string ss = findWord(s,"apple");
  cout<<ss<<endl;

  return 0;
}
