#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll FPB(ll a, ll b){
    if(!b){
        return a;
    }else{
        return FPB(b, a%b);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll f=FPB((a*d)+(b*c), b*d);
    cout<<((a*d)+(b*c))/f<<" "<<(b*d)/f<<"\n";
    return 0;
}