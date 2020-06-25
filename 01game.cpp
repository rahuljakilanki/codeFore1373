#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int z=0,o=0;
        int i=0;
        while(i<s.length())
        {
            if(s[i]=='0')
            o++;
            else
            z++;

            i++;
        }
        if(z<o)
        {
            if(z%2==0)
            {
                cout<<"NET"<<endl;
            }
            else
            {
                cout<<"DA"<<endl;
            }
        }
        else
        {
            if(o%2==0)
            {
                cout<<"NET"<<endl;
            }
            else
            {
                cout<<"DA"<<endl;
            }
        }
        

    }
return 0;

}