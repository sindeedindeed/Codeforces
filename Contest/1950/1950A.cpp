#include <bits/stdc++.h>
using namespace std;

int main(){
   int t,a,b,c;
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>a>>b>>c;
    if(c>a&&c>b&&b>a)
        cout<<"STAIR"<<endl;
    else if(b>a&&b>c)
        cout<<"PEAK"<<endl;
    else
        cout<<"NONE"<<endl;
   }
    return 0;
}
