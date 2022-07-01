#include<bits/stdc++.h>
using namespace std;

typedef int ll;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  cin>>n;

  ll count = 0;

  while(n--){
    ll a, b, c;
    cin>>a>>b>>c;

    ll tot = 0;
    if(a == 1){
      tot++;
    }
    if(b == 1){
      tot++;
    }
    if(c == 1){
      tot++;
    }
    if(tot >= 2){
      count++;
    }
  }
  cout<<count<<"\n";

  return 0;
}