#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define bdm_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main(){
  bdm_io;

  ll n, i;
  long double ans = 0;
  cin>>n;
  map<ll,ll> mp;
  while(n--){
    cin>>i;
    mp[i]++;
  }

  ans += mp[4];

  if(mp[1] != 0){// jika ada 1
    if(mp[1] <= mp[3]){
      mp[3] -= mp[1];
      ans += mp[3];
      ans += mp[1];
      mp[1] =  0;// 1 habis
      mp[3] =  0;// 3 habis
    }else{
      mp[1] -= mp[3];
      ans += mp[3];
      mp[3] =  0;// 1 masih ada
    }
  }
  
  if(mp[2] % 2 == 0){// jika genap
    ans += ceil(mp[2]/2);
  }else{
    if(mp[1] != 0){
      if(mp[1] >2){
        ans += ceil(mp[1]/4);
      }
    }
  }
  cout<<ans<<"\n";
  // for(auto it:mp){
  //   cout<< it.first<<" : "<<it.second<<"\n";
  // }

  return 0;
}