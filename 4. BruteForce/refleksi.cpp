#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,b) for(i=0;i<b;i++)
ll i,j,k,l,x;
bool identik(vector<vector<ll>> satu, vector<vector<ll>> dua){
    FOR(i,x){
        FOR(j,x){
            if(satu[i][j]!=dua[i][j]){
                return false;
            }
        }
    }
    return true;
}
bool vertikal(vector<vector<ll>> satu, vector<vector<ll>> dua){
    FOR(i,x){
        k=x-1;
        FOR(j,x){
            if(satu[i][j]!=dua[i][k]){
                return false;
            }
            k--;
        }
    }
    return true;
}
bool horisontal(vector<vector<ll>> satu, vector<vector<ll>> dua){
    k=x-1;
    FOR(i,x){
        FOR(j,x){
            if(satu[i][j]!=dua[k][j]){
                return false;
            }
        }
        k--;
    }
    return true;
}
bool kanan(vector<vector<ll>> satu, vector<vector<ll>> dua){
    FOR(i,x){
        FOR(j,x){
            if(satu[i][j]!=dua[j][i]){
                return false;
            }
        }
    }
    return true;
}
bool kiri(vector<vector<ll>> satu, vector<vector<ll>> dua){
    l=x-1;
    FOR(i,x){
        k=x-1;
        FOR(j,x){
            if(satu[i][j]!=dua[k][l]){
                return false;
            }
            k--;
        }
        l--;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>x>>x;
    vector<vector<ll>> va;
    FOR(i,x){
        vector<ll> v;
        FOR(j,x){
            ll a;
            cin>>a;
            v.push_back(a);
        }
        va.push_back(v);
    }
    cin>>x>>x;
    vector<vector<ll>> vb;
    FOR(i,x){
        vector<ll> v;
        FOR(j,x){
            ll a;
            cin>>a;
            v.push_back(a);
        }
        vb.push_back(v);
    }
    if(identik(va, vb))
        cout<<"identik\n";
    else if(vertikal(va, vb))
        cout<<"vertikal\n";
    else if(horisontal(va, vb))
        cout<<"horisontal\n";
    else if(kanan(va, vb))
        cout<<"diagonal kanan bawah\n";
    else if(kiri(va, vb))
        cout<<"diagonal kiri bawah\n";
    else
        cout<<"tidak identik\n";


    return 0;
}