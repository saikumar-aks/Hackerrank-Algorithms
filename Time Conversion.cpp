#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    int hr;
    cin>>s;
    hr = (s[0]-'0')*10+(s[1]-'0');
    if(s[8]=='P' && hr==12)
      cout<<to_string(hr);
    else if(s[8]=='P')
      cout<<to_string(hr+12);
    else if(s[8]=='A' && hr==12)
      cout<<"00";
    else
      cout<<s[0]<<s[1];
      for(int i=2;i<8;i++)
       {
         cout<<s[i];
      }    
}
