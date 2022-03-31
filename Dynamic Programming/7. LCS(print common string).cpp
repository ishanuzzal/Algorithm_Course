#include <bits/stdc++.h>
using namespace std;


int main(){
    char str[3001];
    char str2[3001];
    cin>>str;
    cin>>str2;
    int l1 = strlen(str);
    int l2 = strlen(str2);

    int lcs[l1+1][l2+1];

    for(int i=0; i<=l1; i++){
        lcs[i][0] = 0;
    }

    for(int j=0; j<=l2; j++){
        lcs[0][j]=0;
    }

    for(int i=1; i<=l1; i++){
        for(int j=1; j<=l2; j++){
            if(str[i-1]==str2[j-1]){
                lcs[i][j] = 1+lcs[i-1][j-1];
            }
            else{
                lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }

    //cout<<lcs[l1][l2]<<endl;
    int length = lcs[l1][l2];
    char plcs[length+1];
    plcs[length] = '\0';
    int i=l1;
    int j=l2;
    while(i>0 && j>0){
        if(str[i-1]==str2[j-1]){
            plcs[length-1] = str[i-1];
            length--;
            i--;
            j--;
        }
        else if(lcs[i-1][j]>lcs[i][j-1]){
            i--;
        }
        else j--;
    }

    cout<<plcs<<endl;

}
