#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin>>n>>k;
    vector<ll> v;
    while(n--){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<v[k-1]<<"\n";

    return 0;
}