#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
ll n,win,a=0;
cin>>n;
ll total=pow(2,n);
for(ll i=1;i<=total;i+2){
    if(i+(i=1)%2==0)
     win[a]=i=1;
    else
    win[a]=i;
    a++;

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