#include<bits/stdc++.h>
using namespace std;
void solve(int s1 ,int s2,int s3,int s4)
{
    int c=0;
    if(s1==s2||s1==s3||s1==s4)
    {
        c++;
    }
    if(s2==s3||s3==s4)
    {
        c++;
    }
    if(s4==s2)

    {
        c++;
    }
    cout<<c;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    solve(s1,s2,s3,s4);


    return 0;
}
//new way
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[100];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]==arr[i+1]||arr[i]==arr[i+2]||arr[i]==arr[i+3])
        {
            c++;
        }
    }
    cout<<c;

    return 0;
}
//new way
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[100];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4,greater<int>());
    int c=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]==arr[i+1])
        {
            c++;
        }
    }
    cout<<c;

    return 0;
}

