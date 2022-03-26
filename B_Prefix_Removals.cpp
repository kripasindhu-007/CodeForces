#include<bits/stdc++.h>
#define loop(a,b,c) for(ll a=b;a<c;a++)
#define ll long long int
#define pb push_back
using namespace std;
  
 
void solve(){
 int a[26];
    for (int i = 0; i < 26; i++)
    {
      a[i] = 0;
    }
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
      a[s[i] - 97]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
      if (a[s[i] - 97] == 1)
      {
        s = s.substr(i, s.length() - i);
        break;
      }
      else
      {
        a[s[i] - 97]--;
      }
    }
    cout << s << "\n";
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