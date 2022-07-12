#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;

    string sa=s.substr(0, s.find('*'));
    string sc=s.substr(s.find('*')+1);
    int n,i,j,r=0;
    cin>>n;
    while(n--){
        string sd, ss;
        cin>>sd;
        ss=sd;
        int p=0,q=0;
        i=sc.length();
        j=sd.length();
        while(i--){
            j--;
            if(sd[j]!=sc[i])
                q++;
            sd[j]='\0';
        }
        if(q)continue;
        i=0;
        while(i<sa.length()){
            if(sd[i]!=sa[i])
                p++;
            i++;
        }
        if(p)continue;
        r=1;
        cout<<ss<<"\n";
    }
    if(!r)cout<<"\n";

    return 0;
}