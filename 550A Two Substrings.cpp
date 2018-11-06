/// 45379581	2018-11-06 	@Author: Sadikul Islam Shuvo	550A - Two Substrings	GNU C++17	Accepted	46 ms	500 KB

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    string s;
    while(cin>>s)
    {
        if(s.size()<=3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            a=s.find("AB");
            b=s.find("BA", a+2);
            c=s.find("BA");
            d=s.find("AB", c+2);
            if(a!=-1 && b!=-1 || c!=-1 && d!=-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}
