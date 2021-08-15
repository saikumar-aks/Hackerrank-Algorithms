#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   double neg(0), pos(0), zero(0);
   cin>>n;
   int arr[n];
   for(int i=0;i<n;++i)
   {
       cin>>arr[i];
       if(arr[i]>0)
        pos++;
       else if(arr[i]<0)
           neg++;
       else
          zero++;
   }
   cout<<fixed<<setprecision(6)<<pos/n<<"\n"<<neg/n<<"\n"<<zero/n;
}
