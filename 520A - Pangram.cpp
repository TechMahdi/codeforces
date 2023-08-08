#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,count=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
    }
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
      if  (s[i]!=s[i+1])
      {
          count++;

      }

    }
    if(count==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}

