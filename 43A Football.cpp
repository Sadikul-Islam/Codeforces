/// 45334325	Practice: Sadikul Islam Shuvo	43A - 6	GNU C++17	Accepted	62 ms	476 KB	2018-11-05

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp1,temp2;
    string s, arr[10001],ch1,ch2;
    while(cin>>n)
    {
        temp1=0;
        temp2=0;
        for(i=0; i<n; i++)
        {
            cin>>s;
            arr[i]=s;
        }
        ch1=arr[0];
        i=0;
        while(ch1==arr[i])
        {
            i++;
        }
        ch2=arr[i];
        for(i=0; i<n; i++)
        {
            if(arr[i]==ch1)
            {
                temp1++;
            }
            else
                temp2++;
        }
        if(temp1>temp2)
        {
            cout<<ch1<<endl;
        }
        else
            cout<<ch2<<endl;
    }


    return 0;
}

