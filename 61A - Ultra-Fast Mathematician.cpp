#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1,s2;
    cin>>s1>>s2;
    for(int i=0,j=0;i<s1.size(),j<s2.size();i++,j++)
    {
        if(s1[i]!=s2[j])
        {
            s2[j]='1';
        }
        else if(s1[i]==s2[j])
        {
            s2[j]='0';
        }


    }
    cout<<s2<<endl;


    return 0;
}

