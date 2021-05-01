//problem :- https://www.hackerrank.com/challenges/the-hurdle-race/problem 
#include<iostream>
#define Log(Msg) std::cout<<Msg<<std::endl
int main()
{
   std::ios_base::sync_with_stdio(false);
   std::cin.tie(0);
   std::cout.tie(0);
   int t ,k , val, h=0;
   std::cin>> t >> k;
   while(t--)
   {
      std::cin>>val;
      if(val>h)
        h=val;
   }
   (k >= h) ? Log(0) : Log(h-k);
}
