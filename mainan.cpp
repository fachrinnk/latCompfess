#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  vector<ll> va;
  ll n;
  cin>>n;
  for(ll i=0;i<3;i++) {
    ll a;
    cin>>a;
    va.push_back(a);
  }
  sort(va.begin(), va.end());
  ll sum = 0;
  ll count = 0;
  while(sum <= n){
    sum += va[0];
    if(sum > n) break;
    count++;
    sum += va[1];
    if(sum > n) break;
    count++;
    sum += va[2];
    if(sum > n) break;
    count++;
  }
  cout<<count;

  



  return 0;
}