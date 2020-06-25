#include <bits/stdc++.h>

using namespace std;

int main()
{
 long long    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
      long long   int sum=s.length();
   long long      int p=0;
     long long    int i=0;
        while(i<s.length())
        {
              if(s[i]=='-')
              {
                  if(p>0)
                  {
                      p--;
                  }
                  else
                  {
                      sum+=i+1;
                  }
                  
              }  
              else
              {
                  p++;
              }
              
            i++;
        }
    

        cout<<sum<<endl;


    }
    return 0;
}