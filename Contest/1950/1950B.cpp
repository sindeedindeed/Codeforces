#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j;
    char mat[20][20];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<2*n;i++){
            for(j=0;j<2*n;j++){
                mat[i][j]='#';
        }
        if(n>1){
        for(i=0;i<2*n;i+=2){
            for(j=0;j<2*n;j+=2){
                mat[i][j]='.';
        }
        }
        }
        for(i=0;i<2*n;i++){
            for(j=0;j<2*n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
         }
        }
    }
    return 0;
}