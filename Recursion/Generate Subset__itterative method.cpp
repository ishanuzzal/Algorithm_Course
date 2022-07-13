#include<bits/stdc++.h>
using namespace std;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}



int main(){
  
  init();
  vector<vector<int>> outer;
    vector<int> temp;
    outer.push_back(temp);
  int arr[] = {1,2,3};
  
  for(int i=0;i<3;i++){
    int n = outer.size();
    for(int j=0; j<n; j++){
        vector<int> inner;
        inner = outer[j];
        inner.push_back(arr[i]);
        outer.push_back(inner);
    }
  }

    for(int i=0;i<outer.size();i++){
        for(int j=0;j<outer[i].size();j++){
        cout<<outer[i][j]<<" ";
        }
        cout<<endl;
    }
  return 0;
}
