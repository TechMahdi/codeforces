//* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///*/
#include<bits/stdc++.h>
const int mx = 1e5+123;
#define mem(a, b) memset(a, b, sizeof(a) );
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define fraction() cout.unsetf( ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
using namespace std;
int_fast32_t main ()
{
optimize();
int test;
cin>>test;
while(test--)
{
int n;
cin>>n;
 string s;
 cin>>s;
 int maxblackposition=-1;
 int minblackposition=n;
 for(int i=0;i<n;i++)
 {
     if(s[i]=='B')
     {
         maxblackposition=max(maxblackposition,i);
         minblackposition=min(minblackposition,i);
     }
 }
 if(maxblackposition==-1)
 {
     cout<<1<<endl;
 }
 else{
    int length =maxblackposition-minblackposition+1;
    cout<<length<<endl;
 }


}



return 0;
}
