#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, count=0, arr[3000];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(arr[i]==arr[j]){
					arr[j]++;
					count++;
				}
			}
        }
        cout<<count<<endl;
    }
   return 0;
   }