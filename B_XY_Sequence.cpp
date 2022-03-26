#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll n,b,x,y,sum=0;
    cin>>n>>b>>x>>y;
    ll num[n+1];
    num[0]=0;
    loop(i,1,n+1){
        num[i]=max(num[i-1]+x,num[i-1]-y);
        if(num[i]<=b)
        sum +=num[i];
        if(num[i]>b){
        num[i]=min(num[i-1]+x,num[i-1]-y);
        sum +=num[i];
        }

    }
    cout<<sum<<endl;



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