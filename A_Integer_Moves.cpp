#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
int x,y;
cin>>x>>y;
double d=sqrt(x*x+y*y);

if(floor(d)==d&&d!=0)
cout<<"1\n";
 if(d==0)
cout<<"0\n";
else if(floor(d)!=d)
cout<<"2\n";

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