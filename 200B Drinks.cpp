/// 45333691	@author: Sadikul Islam Shuvo	200B - 10	GNU C++17	Accepted	60 ms	392 KB	2018-11-05 19:30:22

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double x,a,sum;
    while(cin>>n)
    {
        sum=0;
        for(i=1; i<=n; i++)
        {
            cin>>x;
            a=100.0/x;
            sum=sum+(1.0/a);
        }
        a=(100.0/n)*sum;
        cout<<a<<endl;
    }
    return 0;
}

