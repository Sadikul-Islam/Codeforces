#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,t,result;
    while(cin>>n>>m>>a)
    {

        if(n%a==0 && m%a==0)
        {
           result=(n/a)*(m/a);
           cout<<result<<endl;
        }
        else if(n%a==0 && m%a!=0)
        {
           result=(n/a)*(m/a+1);
           cout<<result<<endl;
        }
        else if(n%a!=0 && m%a==0)
        {
            result=(n/a+1)*(m/a);
           cout<<result<<endl;
        }
        else
        {
            result=(n/a+1)*(m/a+1);
            cout<<result<<endl;
        }
    }

    return 0;
}
