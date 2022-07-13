#include<bits/stdc++.h>
using namespace std;
typedef vector<string> vs;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}

vector<string> subseq(string u,string p){
    
    if(u.size()==0){
        vector<string> s;
        s.push_back(p);
        return s;
    }
    vs left = subseq(u.substr(1),p+u[0]);
    vs right = subseq(u.substr(1),p);
    for(int i=0;i<left.size();i++){
        right.push_back(left[i]);
    }
    return right;
}

int main(){
  
  init();
  string s = "abc";
  string sub[8];
  vs vi = subseq(s,"");
    for(int i=0;i<vi.size();i++){
        cout<<vi[i]<<endl;
    }
  return 0;
}
