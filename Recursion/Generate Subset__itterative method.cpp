#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);

    int sizes = s.size();
    for(int i=0; i<sizes; i++)
    {
        if(s[i]==' ')
            {
            for(int j=i; j<sizes; j++)
            {
                s[j] = s[j+1];
            }
            sizes--;
            i--;
        }

    }

    for(int i=0; i<sizes; i++){
        cout<<s[i];

    }
    return 0;

}
