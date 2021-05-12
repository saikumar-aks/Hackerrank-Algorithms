//Problem - https://www.hackerrank.com/challenges/utopian-tree/problem

#include <iostream>
#include <vector>
#define Log(Msg) std::cout<<Msg<<std::endl;
int main( ) 
{ 
  std::ios_base::sync_with_stdio("false");
  std::cin.tie(NULL);
  std::cout.tie(NULL);
   int t;
   std::cin>>t;
   while(t--)
   {
     int n, H=1;
     std::cin>>n;
     for(int i=1;i<=n;++i)
       {
         if (i%2==0)
         {
            H+=1;
         }
         else
         {
           H+=H;
         }
       }
      Log(H);
   }               
}
