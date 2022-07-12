#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    int n=a.length();
    int i=0;
    while(n--){
        string s=a;
        s.erase(n,1);
        if(s==b)i=1;
    }
    if(i)cout<<"Tentu saja bisa!\n";
    else cout<<"Wah, tidak bisa :(\n";

    return 0;
}