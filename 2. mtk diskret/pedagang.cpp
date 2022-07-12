#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll FPB(ll a, ll b){
    if(!b)return a;
    return FPB(b, a%b);
}
ll KPK(ll a, ll b){
    return a*b/FPB(a, b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll hasil=1;
    while(n--){
        ll a;
        cin>>a;
        hasil=KPK(a, hasil);
    }
    cout<<hasil<<"\n";
    return 0;
}