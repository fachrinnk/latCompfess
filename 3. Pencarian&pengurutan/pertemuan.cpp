#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    vector<pair<ll,string>> va;
    while(n--){
        string s;
        cin>>s;
        va.push_back(make_pair(s.length(), s));
    }
    sort(va.begin(), va.end());
    for(ll i=0;i<va.size();i++)cout<<va[i].second<<"\n";

    return 0;
}