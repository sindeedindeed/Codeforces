#include <iostream>
#include <cmath>
#define ll long long 
using namespace std;
int main(){
    ll n;
    int sum=0;
    cin>>n;
    if(n%2==0)
        cout<<n/2;
    else
        cout<<(-1)*(n+1)/2;
}