/*///* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///*/
#include<bits/stdc++.h>
typedef long  long ll;
typedef double dl;
const int mx = 1e5+123;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define fraction() cout.unsetf( ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
using namespace std;
int main ()
{
     optimize();
  int n;
  cin>>n;
  int arr[n][2];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<2;j++)
      {
          cin>>arr[i][j];
      }
  }
  int cnt=0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(arr[i][0]==arr[j][1])
          {
              cnt++;
          }
      }
  }
  cout<<cnt<<endl;

    return 0;
}
