#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    ll n,s,sum=0,count=0;
    cin>>n>>s;
    ll temp=n;
    while(sum<=s){
        while(n!=0){
        sum +=n%10;
        n=n/10;
        }
       n=temp++;
       count++;
    }
    cout<<count<<"\n";
    


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