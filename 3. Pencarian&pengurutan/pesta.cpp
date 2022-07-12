#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    vector<string> v;
    while(n--){
        string s;
        cin>>s;
        v.push_back(s);
        sort(v.begin(), v.end());
        ll i=v.size();
        while(i--){
            if(s==v[i])break;
        }
        cout<<i+1<<"\n";
    }

    return 0;
}