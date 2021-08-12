#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
#define Log(Msg) cout<<Msg<<endl
int main()
{
    int n, val,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        sum+=val;
    }
    Log(sum);

}
