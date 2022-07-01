#include<bits/stdc++.h>
using namespace std;

#define bdm_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

typedef long long ll;

int main(){
  bdm_io;

  ll t,n;
  cin>>t;
  while(t--){
    cin>>n;
    unordered_map<ll, ll> mp;
    for(ll i=0;i<n;i++){
      ll a;
      cin>>a;
      a-=i;
      mp[a]++;
    }
    ll ans=0;
    for(auto it: mp){
      ans += (it.second) * (it.second-1) / 2;
    }
    cout<<ans<<"\n";
  }


  return 0;
}