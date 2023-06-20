#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2,m,n;
    cin>>s1>>s2;

    for( int i =0;i<s1.size();i++)
    {
        m+=tolower(s1[i]);

    }
 for( int j =0;j<s2.size();j++)
    {
        n+=tolower(s2[j]);

    }
    if(m.compare(n)==0)
    {
        cout<<"0"<<endl;
    }
    else if(m.compare(n)>0)
    {
        cout<<"1"<<endl;
    }
    else if(m.compare(n)<0)

    {
        cout<<"-1"<<endl;
    }
    return 0;
}
