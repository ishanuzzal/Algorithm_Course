#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
 
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<string> vs;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef unordered_set<string> usr;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}

usr permutation(string u, string p){
  if(u.size() == 0){
    static usr str;
    str.insert(p);
    return str;
  }
  usr final;
  for(int i=0; i<=p.size(); i++){
    string l = p.substr(0, i);
    string r = p.substr(i, p.size());
    if(final.find(l+u[0]+r)!=final.end()){
      continue;
    }
    final = permutation(u.substr(1), l+u[0]+r);
  }
  return final;
}

int main(){
  
  init(); 
  
  string s = "abc";
  usr str =  permutation(s,"");
  for(auto x: str) cout << x << endl;

  return 0;   
}
