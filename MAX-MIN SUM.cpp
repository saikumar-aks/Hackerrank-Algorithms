#include<bits/stdc++.h>
int main()
{
    long long int v[5];
    long long int sum1=0,sum2=0;
    for(int i=0;i<5;++i)
     {
        scanf("%lld", &v[i]);
     }
    std::sort(v,v+5);
    for(int i=0;i<4;++i)
    {
      sum1+=v[i];
      sum2+=v[4-i];
    }  
    printf("%lld %lld", sum1, sum2);
}
