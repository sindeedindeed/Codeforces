#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s,hour,minute,changedHour;
    int intHour;
    cin>>t;
    while(t--){
        cin>>s;
        hour=s.substr(0,2);
        minute=s.substr(3,2);
        intHour=stoi(hour);
        if(intHour==0){
            cout<<"12:"<<minute<<" AM"<<endl;
        }
        else if(intHour<12){
            cout<<s<<" "<<"AM"<<endl;
        }
        else if(intHour==12){
            cout<<s<<" "<<"PM"<<endl;
        }
        else{
            changedHour=to_string(intHour-12);
            if(intHour-12<10)
             changedHour="0"+changedHour;
            s=changedHour+":"+minute;
            cout<<s<<" "<<"PM"<<endl;
        }
    }
return 0;
}
