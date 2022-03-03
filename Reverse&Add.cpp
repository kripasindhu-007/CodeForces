#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    int counter=0;
    cin>>t;
    char s[100];
    string rev;

    for(int i=0;i<t;i++){
        cin>>n>>k;
        for(int j=0;j<=n-1;j++){
            cin>>s[j];
        }
        
    }
    for(int i=0;i<t;i++){

   
    for(int a=0;a<k;a++){
        
        while(int n>=0){
       rev=rev+s[n];
       n--;
    }
    string org=s;
    s=s+rev;
    s=rev+org;
    if(s!=org)
    counter++;

    }

    }
    

    


return 0;
}