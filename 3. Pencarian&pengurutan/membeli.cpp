#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,x;
    cin>>n>>x;
    vector<ld> vw;
    ll i=n;
    while(i--){
        ld w;
        cin>>w;
        vw.push_back(w);
    }
    vector<pair<ld,ld>> vc;
    i=0;
    while(i<n){
        ld c;
        cin>>c;
        vc.push_back(make_pair(c/vw[i],vw[i]));
        i++;
    }
    sort(vc.begin(), vc.end(), greater<pair<ld,ld>>());
    ld hasil=0;
    i=0;
    ll hitung=0;
    while(hitung<x&&i<vc.size()){
        ll j=0;
        while(j<vc[i].second&&hitung<x&&i<vc.size()){
            hasil+=vc[i].first;
            hitung++;
            j++;
        }
        i++;
        
    }
    cout<<fixed<<setprecision(5)<<hasil<<"\n";



    return 0;
}