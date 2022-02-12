
#include <bits/stdc++.h>

using namespace std;

int main() {
 //freopen("input.txt","r",stdin);
  string s;
  cin>>s;
  for(int i=0; i<s.size()-1; i+=2){
    int mins = i;
    for(int j=i+2; j<s.size(); j+=2){
      if(s[mins]>s[j]) mins = j;
    }

    swap(s[mins],s[i]);
  }

  cout<<s<<endl;
  
}