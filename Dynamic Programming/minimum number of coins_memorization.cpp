#include <bits/stdc++.h>

using namespace std;


int getmin(int total, int items[], int dp[]){
    if(total==0) return 0;
    int ans = INT_MAX;
    for(int i=0; i<3; i++){
        if(total-items[i]>=0){
            int subans = 0;
            if(dp[total-items[i]]!=-1){
                subans = dp[total-items[i]];
            }
            else subans = getmin(total-items[i],items,dp);
            
            if(subans+1<ans && subans!=INT_MAX){
                ans = subans+1;
            }
        }
    }
    dp[total] = ans;
    return ans;
}


int main(){
    //freopen("input.txt","r",stdin);
    int n=18;
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    dp[0] = 0;
    int arr[3]={7,5,1};
    cout<<getmin(n,arr,dp)<<endl;
    
}
