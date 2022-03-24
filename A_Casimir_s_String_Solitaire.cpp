#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;

while(t--){
    int a=0,b=0,c=0;
    string st;
    cin>>st;
    for(int i=0;i<st.length();i++){
        if(st.at(i)=='A') a++;
        if(st.at(i)=='B') b++;
        if(st.at(i)=='C') c++;
    
    
    }
    if((a+c)==b) cout<<"YES\n";

    else if((a+c)!=b) cout<<"NO\n";
    

}

return 0;
}