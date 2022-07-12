#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x,y,k;
    cin>>x>>y>>k;

    vector<vector<ll>> v;
    ll i,j;
    i=x+2;
    while(i--){
        vector<ll> va;
        j=y;
        va.push_back(1);
        if(i==x+1||!i)
            while(j--)
                va.push_back(1);
        else while(j--){
                ll a;
                cin>>a;
                va.push_back(a);
            }
        va.push_back(1);
        v.push_back(va);
    }


    ll coo[2];
    coo[0]=x+2;
    coo[1]=y+2;
    i=1;
    while(i<v.size()-1){
        j=1;
        while(j<v[i].size()-1){
            if(v[i+1][j]*v[i-1][j]*v[i][j+1]*v[i][j-1]==k){
                if(coo[1]==j){
                    if(coo[0]>i){
                        coo[0]=i;
                    }
                }else if(coo[1]>j){
                    coo[1]=j;
                    coo[0]=i;
                }
            }
            j++;
        }
        i++;
    }
    if(coo[0]==x+2&&coo[1]==y+2){
        coo[0]=0;
        coo[1]=0;
    }
    cout<<coo[0]<<" "<<coo[1]<<"\n";
    return 0;
}