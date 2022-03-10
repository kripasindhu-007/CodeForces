#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string st1;
    string st2;
   cin>>st1;
   cin>>st2;

   for(int i=0;i<st1.size();i++){
       if(st1[i]<92){
           st1[i] +=32;
       }
       if(st2[i]<92)
       st2[i] +=32;
   }
   if(st1<st2)
   cout<<"-1";
   if(st1>st2)
   cout<<"1";
   if(st1==st2)
   cout<<"0";
   
return 0;
}