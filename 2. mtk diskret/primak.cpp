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
    ll n;
    cin>>n;
    ll max=2;
    
    while(n--){
        ll a;
        cin>>a;
        ll i=0;
        if(a>max){
            max=a;
            if(a<=10)sieve(29);
            else if(a<=100)sieve(541);
            else if(a<=1000)sieve(7919);
            else if(a<=10000)sieve(104729);
            else if(a<=77777)sieve(989999);
        }
        while(a){
            if(prime[i]){
                a--;
            }
            i++;
        }
        cout<<i-1<<"\n";
    }
    return 0;
}