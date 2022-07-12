#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,q;
    cin>>n>>q;
    map<string,string> mp;
    while(n--){
        string s,a;
        cin>>s>>a;
        mp[s]=a;
    }
    while(q--){
        string s;
        cin>>s;
        if(mp[s]=="")cout<<"NIHIL\n";
        else cout<<mp[s]<<"\n";
    }
    return 0;
}
