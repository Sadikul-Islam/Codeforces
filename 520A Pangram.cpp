/// 45334505	@author: Sadikul Islam Shuvo	520A - 24	GNU C++17	Accepted	30 ms	256 KB	2018-11-05

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x;
    string s;
    char ch[10001];
    while(cin>>n>>s)
    {
        if(n<26)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0; i<s.size(); i++)
            {
                ch[i]=tolower(s[i]);
            }
            j=0;
            for(i=97; i<=122; i++)
            {
                for(x=0; x<s.size(); x++)
                {
                    if(char(i)==ch[x])
                    {
                        j++;
                        break;
                    }
                }
            }
            if(j==26)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}

