#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int matrix[100][100],p1,p2;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]==1)
            {
                p1= abs(3-i);
                p2 =abs(3-j);
            }
        }
    }
    cout<<p1+p2<<endl;
 
    return 0;
}
//2nd way 
#include<bits/stdc++.h>
using namespace std;
#define max 5
# define ll int
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll count =0;
    for(ll i=1;i<=5;i++)
    {
        for(ll j=1;j<=5;j++ )
        {
            cin>>count ;
            if(count ==1)
            {
                cout<<abs (3-i)+abs(3-j)<<"\n";
            }
        }
    }
 
 
    return 0;
}
