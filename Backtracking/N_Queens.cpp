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
typedef vector<vector<int>> vVi;
typedef unordered_set<string> usr;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}

bool isSafe(bool arr[4][4], int row, int col){
  for(int i=0; i<row; i++){
    if(arr[i][col]) return false;
  }

  for(int i=row-1,j=col+1; i>=0 && j<4; i--, j++){
    if(arr[i][j]) return false;
  }

  for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
    if(arr[i][j]) return false;
  }

  return true;
}

void display(bool arr[4][4]){
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        if(arr[i][j]) cout<<"Q ";
        else cout<<"X ";
      }
      cout<<endl;
    }

    cout<<endl;
}

int placeQueen(bool arr[4][4],int row){
    if(row==4){
      display(arr);
      return 1;
    }

    int count=0;
    for(int i=0; i<4; i++){
        if(isSafe(arr,row,i)){
            arr[row][i] = 1;
            count+=placeQueen(arr,row+1);
            arr[row][i] = 0;
        }
      }

      return count;
}
    


int main(){
  
  init(); 
  bool arr[4][4] = {
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}
  };

  int ans = placeQueen(arr,0);
  cout<<ans<<endl;
  return 0;
}
