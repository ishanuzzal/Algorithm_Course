#include <bits/stdc++.h>
using namespace std;
 
typedef long long int lli;
 
const lli N = (lli) 1e6+10;
vector<bool> v(N,true);
vector<int> st;
 
 
void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif 
}
 
 
 int power_itt(int n,int p){
     int ans = 1;
    if(p==0) return 1;
    while(p){
        if((p&1)!=0){
        ans =(ans*n);
    }
        n = (n*n);
        p>>=1;
    }
    return ans;
}
 
 
 
bool check(int ck){
    int digit = 0;
    int num=ck;
    while(ck){
        digit++;
        int rem = ck%10;
        if(rem==0) return false;
        ck/=10;
    }
 
    while(digit){
          digit--;
        if(v[num]==false) return false;
        num=num%power_itt(10,digit);
    }
 
    return true;
}
 
int main()
{
    init();
    v[0]=v[1]=false;
 
    for(lli i=2; i*i<=N; i++){
        if(v[i]){
            for(lli j=i*i; j<=N; j+=i){
                v[j] = false;
            }
        }
    }

    int count=0;
    st.push_back(0);
    for(lli i=2; i<=N; i+=1){
        if(v[i] && check(i)){
            count++;
        }
        st.push_back(count);
    }
 
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%d\n",st[n-1]);
    }
 
    return 0;
}