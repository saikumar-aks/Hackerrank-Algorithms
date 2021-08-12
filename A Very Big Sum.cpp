#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
#define Log(Msg) cout<<Msg<<endl
int main()
{
	int num;
	cin>>num;
	long long int val, sum=0;
	for(int i=0;i<num;++i)
	{
		cin>>val;
		sum+=val;
	}
	Log(sum);
}
