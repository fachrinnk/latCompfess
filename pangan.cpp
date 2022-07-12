#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl << "\n"

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n, m;
  cin>>n>>m;
  vector<ll> va;
  for(ll i = 0; i<n; i++){
    ll a;
    cin>>a;
    va.push_back(a);
  }
  sort(va.begin(), va.end());
  ll mini = va[va.size()-1] - va[0];
  for(ll i=0;i<n-1;i++){
    if(m - ((va[i+1]) - va[i]) < mini) mini = m - ((va[i+1]) - va[i]);
  }
  cout<<mini endl;



  return 0;
}