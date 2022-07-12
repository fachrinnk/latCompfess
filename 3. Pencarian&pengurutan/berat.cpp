#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,i;
    cin>>n;
    vector<ll> v;
    i=n;
    while(i--){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll q;
    cin>>q;
    while(q--){
        ll j=0,k=v.size()-1;
        ll x,y;
        cin>>x>>y;
        if(y<v[0]||x>=v[v.size()-1]||y<x){
            cout<<"0\n";
            continue;
        }
        i=0;
        while(v[i]<=x){
            j=i+1;
            i++;
        }
        i=v.size()-1;
        while(v[i]>y){
            k=i-1;
            i--;
        }
        cout<<k-j+1<<"\n";
    }

    return 0;
}