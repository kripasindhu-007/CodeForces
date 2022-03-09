#include<iostream>
using namespace std;
int main()
{
    int x=0;
int task;
cin>>task;
while(task--){
   string st;
   string inc1="X++";
   string inc2="++X";
   string dec1="X--";
   string dec2="--X";
   cin>>st;
   if(st==inc1||st==inc2)
   x++;
   if(st==dec1||st==dec2)
   x--;
}
cout<<x;
return 0;
}