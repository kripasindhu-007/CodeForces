#include<iostream>
using namespace std;
int main()
{
    int prlb;
    
    int counter=0;
    cin>>prlb;//number of problem
    while(prlb--){
        int a,b,c;//storing sureity of three friends
        cin>>a>>b>>c;
        if((a==1&&b==1&&c==0)||(b==1&&c==1&&a==0)||(c==1&&a==1&&b==0))
        counter++;
        if(a==1&&b==1&&c==1)
        counter++;
        
    }
   
    cout<<counter;
return 0;
}