#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/** Pelajaran **/ 
/** Jika ada if maka diharuskakan menginput nilai base jika
sewaktu waktu si if nya itu gak masuk **/ 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll x,y;
    cin>>x>>y;
    char matriks[x][y];
    ll i,j,p,a=1;
    i=x;
    while(i--){
        j=y;
        while(j--)
            cin>>matriks[i][j];
    }
    while(a){
        a=0;
        i=x;
        while(i--){
            j=y;p=0;
            while(j--&&!p){
                if(matriks[i][j]=='0')p++;
            }
            if(!p){
                j=y;a=1;
                while(j--)
                    matriks[i][j]='0';
            }
        }
        if(a==0)break;
        ll b=0;
        for(i=0;i<x;i++){
            j=y;p=0;
            while(j--&&!p){//cari 0 baris penuh
                if(matriks[i][j]=='1')p++;
            }
            if(!p){
                b=i;
                break;
                }
        }
        ll k;
        j=y;
        while(j--){
            i=x-1;p=0;
            while(i!=b){
                if(matriks[i][j]=='1'){
                    p++;
                    matriks[i][j]='0';
                }
                i--;
            }
            i=x;k=0;
            while(i--){
                if(matriks[i][j]=='1'){
                    k=i+1;
                    break;
                }
            }
            for(i=k;i<k+p;i++){
                matriks[i][j]='1';
            }
        }
    }
    i=x;
    while(i--){
        j=y;
        while(j--)
            cout<<matriks[i][j];
        cout<<"\n";
    }
    return 0;
}