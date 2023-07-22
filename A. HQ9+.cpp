#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int y=0,avg=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9' )
        {
            y++;
            avg+=y;
        }

    }
    if(avg>=1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
 
