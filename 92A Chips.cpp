/// 45334153	Practice: Sadikul Islam Shuvo	92A - 18	GNU C++17	Accepted	62 ms	0 KB	2018-11-05

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,sum1,sum2;
    while(cin>>n>>m)
    {
        sum1=m;
        while(sum1>0)
        {
            for(i=1; i<=n; i++)
            {
                sum1=sum1-(i*1);
                if(sum1==0)
                {
                    cout<<sum1<<endl;
                    break;
                }
                if(sum1<0)
                {
                    cout<<sum2<<endl;
                    break;
                }
                sum2=sum1;
            }
        }

    }

    return 0;
}

