#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int n,t;
    cin>>n>>t;
    cin>>s;
    for(int i=0;i<t;i++)
    {
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B'&& s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            i++;
        }

    }

}
    cout<<s<<endl;

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
    string s;
    int n,t;
    cin>>n>>t;
    cin>>s;
    while(t!=0)
    {


    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B'&& s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            i++;
        }

    }
t--;
}
    cout<<s<<endl;

    return 0;
}
 
