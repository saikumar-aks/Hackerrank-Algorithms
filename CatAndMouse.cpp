// <Problem Link :- https://www.hackerrank.com/challenges/cats-and-a-mouse/problem >

#include<iostream>
#include<string>
#define Log(Msg) std::cout<<Msg<<std::endl;
std::string CatMouse(int x, int y, int z) 
{
    return (abs(x - z) < abs(y - z)) ? "Cat A" : (abs(x - z) > abs(y - z)) ? "Cat B" : "Mouse C";
}
int main()
{
   std::ios_base::sync_with_stdio(false);
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   int t;
   std::cin>>t;
   while(t--)
   {
      int x , y , z;
      std::cin>>x>>y>>z;
      Log(CatMouse(x,y,z));
   }

}
