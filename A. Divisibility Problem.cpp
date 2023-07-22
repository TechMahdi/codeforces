#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,a,b,c=0;
    cin>>t;
while(t--)
    {


        cin>>a>>b;

        if(a%b==0)
        cout<<"0"<<endl;

       else if (a%b!=0)
       {
           c=a%b;
            cout<<b-c<<endl;
       }


    }


    return 0;
}


