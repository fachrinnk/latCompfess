#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ld n;
    cin>>n;// 5 bagi 2 = 2 3
    ld i=n;// 6 bagi 2= 3 4
    vector<ld> v;
    while(i--){
        ld a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    ld d;
    if(v.size()%2==0){
        d=(v[v.size()/2-1]+v[v.size()/2])/2;

    }else{
        d=v[v.size()/2];
    }
        cout<<fixed<<setprecision(1)<<d<<"\n";
    
    return 0;
}