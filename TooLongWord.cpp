#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>> a;
    string word[a];
    for(int i=0;i<a;i++){
        cin>>word[i];     //accepting all words
    }
    for(int j=0;j<a;j++){
        if(word[j].length()<11)
        cout<<word[j]<<endl;    //if length is not greater than 10
                                //print same owrd
        else{
          int length=word[j].length(); //length of word
          char first=word[j].at(0);  //first character
          char last=word[j].at(length-1);//last character
          cout<<first<<length-2<<last<<endl;//printing
        }
    }

return 0;
}