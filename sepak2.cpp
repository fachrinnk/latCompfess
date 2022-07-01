#include<bits/stdc++.h>
using namespace std;
#define bdm_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl '\n'
int main(){
  bdm_io;

  string s;

  cin>>s;

  if(s.find("0000000") < 100|| s.find("1111111") < 100)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
  
  return 0;
}