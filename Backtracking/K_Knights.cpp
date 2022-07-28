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
typedef vector<bool>	vb;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef vector<vector<int>> vVi;
typedef vector<vector<bool>> vVb;
typedef unordered_set<string> usr;




void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}

bool isValid(int row, int col){
     if(row<0 || row>=4 || col<0 || col>=4) return false;
     return true;
}

bool isSafe(vVb &arr, int row, int col){
  if(isValid(row-2,col+1)){
    if(arr[row-2][col+1]) return false;
  }
  if(isValid(row-2,col-1)){
    if(arr[row-2][col-1]) return false;
  }
  if(isValid(row-1,col+2)){
    if(arr[row-1][col+2]) return false;
  }
  if(isValid(row-1,col-2)){
    if(arr[row-1][col-2]) return false;
  }
  if(isValid(row+2,col+1)){
    if(arr[row+2][col+1]) return false;
  }
  if(isValid(row+2,col-1)){
    if(arr[row+2][col-1]) return false;
  }
  if(isValid(row+1,col+1)){
    if(arr[row+1][col+1]) return false;
  }
  if(isValid(row+1,col-1)){
    if(arr[row+1][col-1]) return false;
  }
  
  return true;
}

void display(vVb &arr){
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        if(arr[i][j]) cout<<"P ";
        else cout<<"X ";
      }
      cout<<endl;
    }

    cout<<endl;
}

void placeKnight(vVb &arr,int row,int col, int k){
    if(k==0){
      display(arr);
      return;
    }
    if(row>=4) return;
    if(col>=4) return placeKnight(arr,row+1,0,k);
  
    if(isSafe(arr,row,col)){
      arr[row][col] = 1;
      placeKnight(arr,row,col+1,k-1);
      arr[row][col] = 0;
    }
     placeKnight(arr,row,col+1,k);
    

    
}
    


int main(){
  
  init(); 
  int N,k;
  cin>>N;
  cin>>k;
  vVb arr;
  vb inp;
  for(int i=0; i<N; i++){
    inp.push_back(0);
  }
  for(int i=0; i<N; i++){
    arr.push_back(inp);
  }
  
  placeKnight(arr,0,0,k);

  return 0;
}
