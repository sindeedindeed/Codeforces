#include <iostream>

using namespace std;

int main(){
  int a,b,year=0;
  cin>>a>>b;
  while(true){
    if(a>b)
      break;
    a*=3;
    b*=2;
    year++;
  }
  cout<<year;
  return 0;
}
