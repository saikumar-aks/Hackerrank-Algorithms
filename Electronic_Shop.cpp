/* < PROBLEM LINK :- https://www.hackerrank.com/challenges/electronics-shop/problem > */

#include<iostream>
#include<vector>
#define Log(x) std::cout<<x<<std::endl;
#define Input(Y) std::cin>>Y;
#define arr(x1) std::vector<int> x1;
int main()
{
   std::ios_base::sync_with_stdio(false);
   std::cin.tie(0);
   std::cout.tie(0);
   arr(key);
   arr(usb);
   int b , n , m , val, count=0;

   std::cin>>b>>n>>m;
   for(int i=0;i<n;i++)
   {
      Input(val);
      key.push_back(val);
   }
   for(int i=0;i<m;i++)
   {
      Input(val);
      usb.push_back(val);
   }
   for(int i=0; i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
         if((key[i]+usb[j] <= b) && (key[i]+usb[j] > count))
         {
             count=(key[i]+usb[j]); 
         }
   
      }
   }
   if(count > 0)
   {
      Log(count);
   }
   else
   {
      Log("-1");
   }
}
