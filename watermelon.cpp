#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int w,sum;
    cin>>w;
    sum=w-2;
    if(sum%2==0 && w>2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<"\n";
    }


    return 0;
}

