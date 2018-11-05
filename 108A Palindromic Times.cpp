#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hh, mm;
    char ch;
    while(cin>>hh>>ch>>mm)
    {
        do
        {
            ++mm;
            if (mm == 60)
            {
                ++hh;
                mm = 0;
            }
            if (hh == 24)
            {
                hh = 0;
            }
        }
        while (hh % 10 * 10 + hh / 10 != mm);
        ///cout<<hh<<":"<<mm<<endl;
        printf("%02d:%02d\n", hh, mm);
    }
    return 0;
}

