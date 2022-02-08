#include <bits/stdc++.h>

using namespace std;

const int N=100001;
int n;
int arr[N];



int main() {
 //freopen("input.txt","r",stdin);

 while(scanf("%d",&n)==1){
   int p;
   
  int arr[n];

  for(int i=1; i<=n; i++){
    cin>>arr[i];
  }
  cin>>p;
  sort(arr+1,arr+n+1);
  int ans = numeric_limits<int>::max();;
  for(int i=1; i<=n; i++){
    int sub = p-arr[i];
  // int  ans1 = -1;
  if(sub<arr[i]){
    break;
  }
  else{
    int low = i+1;
   int high = n;

  while(high>=low){
    int mid = (high+low)/2;
    if(arr[mid]==sub){
      ans = min(ans,sub);
      break;
    }
    else if(arr[mid]<sub) low = mid+1;
    else high = mid-1;
  }
  }
  }
  // cout<<<<" "<<p-ans<<endl;
   printf("Peter should buy books whose prices are %d and %d.\n\n",p-ans,ans);
 }
  
}