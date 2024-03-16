    #include <iostream>
    
    using namespace std;
    
    int main(){
        int k,n,w,totalCost=0;
        cin>>k>>n>>w;
        for(int i=1;i<=w;i++)
            totalCost+=k*i;
        int borrowed=totalCost-n;
        if((borrowed)<0){
            cout<<0;
            return 0; 
        }
        cout<<borrowed;
        return 0;
    }
    