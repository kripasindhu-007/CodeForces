#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a+2)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
ll n,a=0;
cin>>n;
ll total=pow(2,n);
vector<int>win;
loop(i,1,(2^n)+1){
    if(i+(i+1)%2==0)
    win.pb(i+1);
    else
    win.pb(i);
}
while(win.size()==1){
    
}

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