#include<bits/stdc++.h>
int main()
{
    int n, c=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d", &arr[i]);
    }
    std::sort(arr, arr+n);
    for(int i=0;i<n;++i)
    {
      if(arr[i]==arr[n-1])
        c++;
    }
    printf("%d", c);
}

// -------------------------OR---------------------------------------

#include<bits/stdc++.h>
int main()
{
    int n, val=0, max_val=-1, c=0;
    scanf("%d", &n);
    for(int i=0;i<n;++i)
     {
       scanf("%d", &val);
       if(val > max_val)
        {
          max_val=val;
          c=1;
        }
       else if(val==max_val)
         {
           c++;
         }
     }

    printf("%d", c);
}
