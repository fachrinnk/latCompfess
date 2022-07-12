#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<ll, string>> v;
    vector<string> va;
    ll n;
    cin>>n;
    while(n--){
        ll a,b;
        string s;
        cin>>a>>b;
        ll i=a-b;
        cin>>ws>>s;
        while(a--){
            string sa;
            ll c,d,e;
            cin>>sa>>c>>d>>e;
            v.push_back(make_pair(501501*e+501*d+c, sa));
        }
        sort(v.begin(), v.end(), greater<pair<ll, string>>());
        while(i--)v.pop_back();
        b=v.size();
        i=0;
        while(b--&&!i)
            if(s==v[b].second)
                {cout<<"YA\n";i++;}
        if(!i) cout<<"TIDAK\n";
        v.clear();
    }
    return 0;
}