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

void possibleWays(int r, int c,string p){
  if(r==3 && c==3){
    cout<<p<<endl;
    return;
  }
  if(r>3) return;
  if(c>3) return;
  possibleWays(r+1,c,p+"D");
  possibleWays(r,c+1,p+"R");
}


int main(){
  
  init(); 
  possibleWays(1,1,"");
 
  
  return 0;
}
