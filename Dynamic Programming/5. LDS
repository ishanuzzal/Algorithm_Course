#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7] = {10,12,7,5,4,14,14};
    int LDS[7];
    for(int i=0; i<7; i++){
        LDS[i] = 1;
    }

    for(int i=1; i<7; i++){
        for(int j=0; j<i; j++){
            if(arr[i]<arr[j] && LDS[i]<LDS[j]+1){
                LDS[i] = LDS[j]+1;
            }
        }
    }

    int length = LDS[0];
    for(int i=1; i<7; i++){
        if(length<LDS[i]){
            length = LDS[i];
        }
    }

    cout<<length<<endl;
}
