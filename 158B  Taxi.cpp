#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1,count2,count3,count4,sum,i,temp;
    while(cin>>n)
    {
        int arr[n];
        count1=0;
        count2=0;
        count3=0;
        count4=0;
        sum=0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];

            if(arr[i]==1)
            {
                count1++;
                if(count1==n)
                {
                    sum=count1/4;
                    break;
                }
            }

            else if(arr[i]==2)
            {
                count2++;
            }

            else if(arr[i]==3)
            {
                count3++;
                if(count3==n)
                {
                    sum=count3;
                    break;
                }
            }
            else if(arr[i]==4)
            {
                count4++;
                if(count4==n)
                {
                    sum=count4;
                    break;
                }
            }
        }

        for(i=0; i<n; i++)
        {
            sum=count4;
            if(arr[i]==1 || arr[i]==3 && count1==count3)
            {
                sum=sum+count1;
            }
            else
            {
                if(arr[i]==1 || arr[i]==3 && count1<count3)
                {
                    temp=count3-count1;
                    sum=sum+temp+count1;
                }
                else
                {
                    temp=count1-count3;
                    sum=sum+temp+count3;
                }
            }

            if(count1==count2)
            {
                sum=sum+count1;
            }
            else
            {
                if(count1<count2)
                {
                    temp=count2-count1;
                    sum=sum+temp;
                }
                else
                {
                    temp=count1-count2;
                    sum=sum+temp;
                }
            }

            if(count2%2==0)
            {
                sum=sum+(count2/2);
            }
            else
            {
                sum=sum+(count2/2)+(count2%2);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
