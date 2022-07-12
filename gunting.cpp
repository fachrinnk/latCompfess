#include<bits/stdc++.h>
using namespace std;

typedef int ll;


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll a;
  cin>>a;

  string sa,sb;
  map <char, ll> ma;
  map <char, ll> mb;
  cin>>sa>>sb;

  for(ll i = 0; i<a;i++){
    ma[sa[i]]++;
    mb[sb[i]]++;
  }
  cout<< min(ma['G'], mb['K'])
  + min(ma['K'], mb['B'])
  + min(ma['B'], mb['G']);

  return 0;
}