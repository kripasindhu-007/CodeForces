#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
    string st;
    cin>>st;

    ll begin=0,end=5,sum1=0,sum2=0;
    while(begin<=2){
        sum1 +=st[begin];
        begin++;
        sum2 +=st[end];
        end--;
    }
    if(sum1==sum2)
    cout<<"YES\n";
    else
    cout<<"NO\n";


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