#include<bits/stdc++.h>
using namespace std;

typedef int ll;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n,k;
  vector<ll> va;

  cin>>n>>k;
  while(n--){
    ll a;
    cin>>a;
    va.push_back(a);
  }
  sort(va.begin(), va.end());
  ll ntim = va.size()/3;

  ll j =2;
  ll ans =0;
  for(ll i=0;i<ntim;i++){
    if(k + va[j] <= 5){
      ans++;
    }
    j+=3;
  }
  cout<<ans;
  // for(ll i=0;i<va.size();i++)cout<<va[i]<<' ';

  return 0;
}