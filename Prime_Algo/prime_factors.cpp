#include <bits/stdc++.h>
using namespace std;
 
typedef long long int lli;

 
 
void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

 
int main()
{
    init();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=2; i*i<=n; i++){
            while(n%i==0 && n!=1){
                v.push_back(i);
                n/=i;

            }
        }

        if(n>1) v.push_back(n);

        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}