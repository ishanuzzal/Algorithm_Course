#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    freopen("input.txt","r",stdin);
    cin>>t;
    for(int i=1; i<=t; i++){
        int prtctr = 0;
        int n;
        cin>>n;
        fflush(stdin);
        vector<char> str(n+2,'#');
        for(int j=0; j<n; j++){
            cin>>str[j];
           // cout<<str[j]<<endl;
        }

        for(int j=0; j<n; j++){
            if(str[j]=='.'){
                str[j+1] = str[j+2] = '#';
                prtctr++;
            }
        }

        cout<<"Case "<<i<<": "<<prtctr<<endl;

    }
    

    return 0;
}
