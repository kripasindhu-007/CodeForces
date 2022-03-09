#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int counter=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];    //accepting scores of all students
    }
    for(int j=0;j<n;j++){
        int temp=arr[k-1];
        if(arr[j]>0&&arr[j]>=temp)
        counter++;
    }
    cout<<counter;
return 0;
}