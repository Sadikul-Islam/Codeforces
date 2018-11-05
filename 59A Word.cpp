/// 45334711	2018-11-05	@Author: Sadikul Islam Shuvo	A - Word	GNU C++17	Accepted	62 ms	300 KB

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ch,c;
    int i,temp1,temp2;
    while(cin>>s)
    {
        temp1=0;
        temp2=0;
        for(i=0; i<s.size(); i++)
        {
            ch=s[i];
            if(isupper(ch))
            {
                temp1++;
            }
            else
            {
                temp2++;
            }
        }
        if(temp1<temp2 || temp1==temp2)
        {
            for(i=0; i<s.size(); i++)
            {
                ch=s[i];
                c=tolower(ch);
                cout<<c;
            }
            cout<<endl;
        }

        else
        {
            for(i=0; i<s.size(); i++)
            {
                ch=s[i];
                c=toupper(ch);
                cout<<c;
            }
            cout<<endl;
        }
    }

    return 0;
}

