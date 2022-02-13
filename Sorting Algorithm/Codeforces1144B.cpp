#include <bits/stdc++.h>

using namespace std;
 
void merge(vector <int> &v, int left,int mid,int right){
    int i = left;
    int j = mid+1;
   vector<int> temp;
    while(i<=mid && j<=right){
      if(v[i]<v[j]){
          temp.push_back(v[j]);
          j++;
      }
      else { temp.push_back(v[i]);
        i++;
      }            
    }

      while(i<=mid){
         temp.push_back(v[i]);
         
        i++;
      }
      while(j<=right){
        temp.push_back(v[j]);
        j++;
      }

    for(int i= left; i<=right; i++){
      v[i] = temp[i-left];
    }

}

void mergeSort(vector<int> &v,int l,int r){
  
  if(l<r){
    int mid = (l+r)/2;
    mergeSort(v,l,mid);
    mergeSort(v,mid+1,r);
    merge(v,l,mid,r);
  }
}

int sum(vector<int> v,int size){
  int sum = 0;
  for(int i=0; i<size; i++){
    sum+=v[i];
  }

  return sum;
}

int main() {
 //freopen("input.txt","r",stdin);
  int n;
  cin>>n;
  vector<int> v1;//odd
  vector<int> v2;
 
  int sumAll = 0;
  for(int i=0; i<n; i++){
    int a;
    cin>>a;
    
    sumAll+=a;
    if(a&1) v1.push_back(a);
    else v2.push_back(a);
  }

  mergeSort(v1,0,v1.size()-1);
  mergeSort(v2,0,v2.size()-1);
  int size1=v1.size();
  int size2=v2.size();
  int range = min(v1.size(),v2.size());
  if(v1.size()>range) size1 = range+1;
  if(v2.size()>range) size2 = range+1;

  int sum1 = sum(v1,size1);
  sum1+=sum(v2,size2);
  int ans = sumAll-sum1;
  cout<<ans<<endl;
}