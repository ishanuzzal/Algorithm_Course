#include<bits/stdc++.h>

using namespace std;

int main(){
   int coin[5] = {0,7,5,5,1};
   int tk = 10;
   int amount[5][tk+1];
   memset(amount,0,sizeof(amount));
    amount[0][0] = 1;

    for(int i=1; i<5; i++){
        for(int j=0; j<=tk; j++){
            if(amount[i-1][j] && j+coin[i]<=10){
                amount[i][j+coin[i]] = 1;
                amount[i][j]=1;
            }
            else if(amount[i][j]==0){
                amount[i][j]=amount[i-1][j];
            }
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<=tk; j++){
            cout<<amount[i][j]<<" ";
        }
        cout<<endl;
    }

    
}
