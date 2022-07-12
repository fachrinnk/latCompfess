#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    ll x;
    cin>>x;
    ll i=n;
    vector<ll> v;
    while(i--){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<ll>());
    ll min=abs(x-v[v.size()-1]);
    ll hasil=v[v.size()-1];
    i=v.size()-1;
    while(i--){
        if(abs(x-v[i])<min){
            min=abs(x-v[i]);
            hasil=v[i];
        }
    }
    cout<<hasil<<"\n";


    return 0;
}