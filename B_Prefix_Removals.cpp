#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
string st;
cin>>st;
map<char,int>m;
loop(i,0,st.length())
m[st[i]]++;

loop(i,0,st.length()){
    if(m[st[i]]=1)break;
      
    else
    m[st[i]]--;
}
loop(i,0,st.length())
cout<<st[i];
cout<<"\n";


}



int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
solve();
}
return 0;
}