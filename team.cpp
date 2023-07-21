#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int p,v,t,sum=0;
    cin>>n;
    while(n--)
    {

        cin>>p>>v>>t;
        if(p+v+t>1)
        {
            sum++;
        }

    }
cout<<sum <<endl;

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
    int n;
    int p,v,t,count=0;
    cin>>n;
    while(n--)
    {

        cin>>p>>v>>t;
        if((p==1 && v==1 && t==0)|| (p==0 && v==1 && t==1 )|| p==1 && v==0 && t==1|| (p==1 && v==1 &&  t==1))
        {
            count++;
        }
        //cout<<count<<endl;
    }

cout<<count<<endl;
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
    int n,x,y,z,count =0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
     if((x+y>1)|| (y+z>1)|| (z+x>1) || (x+y+z>1))
     {
         count ++ ;
     }

   // cout<<count<<endl;

    }
 cout<<count<<endl;

    return 0;
}
// new way
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,p,v,t,d,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>v>>t;
        if(p==0 && v==1 && t==1 || p==1 && v==0 && t==1 || p==1 && v== 1 && t==0 || p==1 && v==1 && t==1 )
        {
            d=1;
        }
        else{
            d=0;
        }
        sum+=d;
    }
        cout<<sum<<endl;

    return 0;
}




