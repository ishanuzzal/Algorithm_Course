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

void permutation(string u, string p){
  if(u.size() == 0){
    cout << p<<endl;
    return;
  }
  int l = (u[0]-'0');
  for(int i=(l-1)*3; i<l*3 && i<26; i++){
    char c = 'a'+i;

    permutation(u.substr(1),p.insert(p.size(),1,c));
    p.pop_back();
  }
}

/* Assume you use a button phone. To write a message you have to use numbers(1,2,3)..
By pressing 1 you can write a,b,c and by pressing 2 u can write d,e,f.
This sequence is maintained for all the numbers expect 9,where there is only two characters left.
so by pressing 9 u can write y,z.
To write a u need to press 1 one time, to write b u need to press 1 two times.
This code gives us possible combination we can make by pressing given buttons*/


int main(){
  
  init(); 
  
  string s = "234";
  permutation(s,"");


  return 0;   
}
