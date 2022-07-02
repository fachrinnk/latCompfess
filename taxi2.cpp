#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define bdm_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

int main(){
  bdm_io;

  ll n, i;
  long double ans = 0;
  cin>>n;
  map<ll,ld> mp;
  while(n--){
    cin>>i;
    mp[i]++;
  }

  ans += mp[4];
  ans += floor(mp[2]/2);
  if(fmod(mp[2], 2) == 1) {
    mp[1]-=2;
    ans++;
  }
  ans+=mp[3];
  mp[1]-=mp[3];

  if(mp[1]>0) ans+=ceil(mp[1]/4);

  cout<<ans<<endl;

  return 0;
}