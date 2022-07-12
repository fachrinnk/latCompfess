#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
bool prime[990000];
void sieve(ll n){
    for(ll p=2;p*p<=n;p++){
        if(prime[p]){
            for(ll i=p*p; i<=n;i+=p){
                prime[i]=false;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(prime, true, sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    
    vector<ll> v;

    sieve(989999);
    ll i=0;
    while(i<=989999){
        if(prime[i])v.push_back(i);
        i++;
    }
    ll n;
    cin>>n;
    while(n--){
        ll a;
        cin>>a;
        cout<<v[a-1]<<"\n";
    }
    return 0;
}