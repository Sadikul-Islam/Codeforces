/// 45340048	2018-11-05 	 @Author: Sadikul Islam Shuvo	63A - Sinking Ship	GNU C++17	Accepted	62 ms	0 KB

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,arr[1000];
    while(cin>>n)
    {
        string s1[n], s2;
        for(i=0; i<n; i++)
        {
            cin>>s1[i]>>s2;
            if(s2=="rat")
            {
                arr[i]=0;
            }
            else if(s2=="woman" || s2=="child")
            {
                arr[i]=1;
            }
            else if(s2=="man")
            {
                arr[i]=2;
            }
            else
                arr[i]=3;
        }

        for(j=0; j<4; j++)
        {
            for(i=0; i<n; i++)
            {
                if(arr[i]==j)
                {
                    cout<<s1[i]<<endl;
                }

            }
        }
    }

    return 0;
}

