#include<iostream>
using namespace std;
int main ()
{
    int cnt=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='x' && s[i+1]=='x' &&s[i+2]=='x')
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
