//get a sum from different combination of subset of a set

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

void subsetSum(vi arr, int n, int target, string s){
    if(target == 0){
        cout << s << endl;
        return;
    }

    if(target<0 || n==0) return;

    subsetSum(arr,n-1,target-arr[n-1],s+to_string(arr[n-1]));
    while(arr[n-1]==arr[n-2]){
      n--;
    }
    subsetSum(arr,n-1,target,s);
}



int main(){
  
  init(); 
   vi arr = {7,7};
   sort(all(arr));
    int n = arr.size();
    int target = 7;
    subsetSum(arr, n, target,"");
    return 0;
}
