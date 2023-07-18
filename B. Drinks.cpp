#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double avg=0.0;
    int   n;
    cin>>n;
    int   arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
      avg+=arr[i];
  }
  cout<<fixed <<setprecision(12)<< avg/n;

    return 0;
}

