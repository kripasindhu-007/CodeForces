#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int matrix[5][5],row,column;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                row=abs(2-i);
                column=abs(2-j);
            }
        }
    }
    cout<<row+column;
return 0;
}