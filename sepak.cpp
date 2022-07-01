#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;

  cin>>s;
  int count0 = 0;
  int count1 = 0;
  for(int i=0;i<s.size();i++){
    if(s[i] == '1'){
      count1++;
      count0 = 0;
    }else{
      count0++;
      count1 =0;
    }
    if(count1 >= 7 || count0 >= 7) break;
  }
  if(count1 >= 7 || count0 >= 7) cout << "YES";
  else cout<<"NO";
  return 0;
}