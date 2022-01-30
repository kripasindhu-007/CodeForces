#include<iostream>
using namespace std;
int main(){
    int n;
    int num1,num2;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num1>>num2;
        int s=num1%num2;
        if(s!=0){
        int ans=num2-s;
        cout<<ans<<endl;
        }
        else
        cout<<"0"<<endl;
    }
    return 0;
}