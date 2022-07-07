#include<bits/stdc++.h>
using namespace std;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}
int binarySearch(int arr[],int l,int r,int val){
    if(l>r) return -1;
    int mid = (l+r)/2;
    if(arr[mid]==val) return mid;
    if(arr[mid]>val) return binarySearch(arr,l,mid-1,val);
    return binarySearch(arr,mid+1,r,val);
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int val = 3;
    cout<<binarySearch(arr,0,sizeof(arr)/4-1,val)<<endl;
    return 0;
}