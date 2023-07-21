#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    string m;
    cin>>n;
    while(n!=0)
    {

        cin>>m;
        int length =m.size();
        if(length >10)
        {
            cout<<m[0]<<length-2<<m[length-1]<<endl;
        }
        else
        {
            cout<<m<<endl;
        }
        n--;
    }


    return 0;
}
