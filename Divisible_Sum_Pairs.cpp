/* <Problem link :- https://www.hackerrank.com/challenges/divisible-sum-pairs/problem > */

#include<iostream>
#include<vector>
#define Log(Message) std::cout<<Message<<std::endl;
int main()

{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int x , k;
    int count=0;
    std::cin>>x>>k;
    std::vector<int> arr;
    for(int i=0;i<x;i++)
    {
        int val;
        std::cin>>val;
        arr.push_back(val);
    }
    for(int i =0; i<x-1;i++)
    {
        for(int j=(i+1);j<x;j++)
        {
            if ((arr[i]+arr[j]) % k == 0)
            {
                count++;
            }
        }
    }
    Log(count);
}
