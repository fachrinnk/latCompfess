#include<bits/stdc++.h>
using namespace std;
int a;
map<int,int> mp;
bool skor(int c ,int d){
    if(c==a){
        for(int i=1;i<=a;i++){
            if(mp[i])return false;
        }
        return true;
    }else if(d==a+1)return skor(c+1,c+2);
    mp[c]-=3;
    bool win=skor(c,d+1);
    mp[c]+=3;
    mp[d]-=3;
    bool lose=skor(c,d+1);
    mp[d]+=3;
    mp[c]--;
    mp[d]--;
    bool draw=skor(c,d+1);
    mp[c]++;
    mp[d]++;
    return win||lose||draw;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    
    while(n--){
        cin>>a;
        for(int i=1;i<=a;i++){
            int b;
            cin>>b;
            mp[i]=b;
        }
        if(skor(1,2))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}