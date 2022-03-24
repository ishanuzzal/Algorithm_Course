#include<bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    int n,m,tk;
    cout<<"Enter the total taka"<<endl;
    cin>>tk;
    cout<<"Enter the total coins"<<endl;
    cin>>n;
    int dp[n+1][tk+1];
    int coin[n+1];
    coin[0] = 0;
    for(int i=1; i<=n; i++){
        cin>>coin[i];
    }
   memset(dp,0,sizeof(dp));
    dp[0][0] = 1;

    for(int i=1; i<=n; i++){
        for(int j=0; j<=tk; j++){
            if(dp[i-1][j]!=0 && j+coin[i]<=tk){ 
                dp[i][j+coin[i]]=1;
                dp[i][j]+=dp[i-1][j];
            }
            else if(dp[i-1][j]!=0){
                dp[i][j]+=dp[i-1][j];
            }
        }
    }

    /*for(int i=1; i<=n; i++){
        for(int j=0; j<=tk; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/

    cout<<dp[n][tk]<<endl;   
}