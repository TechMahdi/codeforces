#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int count=0;
    int l1=s1.size();
    int l2=s2.size();
    for(int i=0,j=l2-1;i<l1,j>=0;i++,j--)
    {
        if(s1[i]!=s2[j])
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;

    return 0;
}

//another way
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int count=0;
    int l1=s1.size();
    int l2=s2.size();
    for(int i=0,j=l2-1;i<l1,j>=0;i++,j--)
    {
        if(s1[i]==s2[j])
        {
            count++;
        }
    }
    if(count==s2.size())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
