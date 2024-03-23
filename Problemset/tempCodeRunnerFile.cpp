#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
  string st,new_st="";
  cin>>st;
  for(int i=0;i<st.length();i++){
    st[i]=tolower(st[i]);
    if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
        st.erase(st.begin()+i);
  }
  for(auto c:st)
    new_st+="."+c;
  cout<<new_st;    
  return 0;
}
