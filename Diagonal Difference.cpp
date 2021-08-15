#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, sum1=0, sum2=0, it=0;
   cin>>n;
   int it2=n-1;
   int arr[n][n];
   for(int i=0;i<n;++i)
   {
       for(int j=0;j<n;++j)
       {
           cin>>arr[i][j];
           if(j==it)
               sum1+=arr[i][j];
           if(j==it2)
              sum2+=arr[i][j];
       }
       it++;
       it2--;
   } 
   cout<<abs(sum1-sum2);
}
