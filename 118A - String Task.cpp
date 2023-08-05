#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;

    getline(cin,s);
    //transform(s.begin(),s.end (),s.begin(),::tolower);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u' && s[i]!='A'&&s[i]!='E'&&s[i]!='U'&&s[i]!='O'&&s[i]!='I'&& s[i]!='y'&&s[i]!='Y')
        {
            s[i]=tolower(s[i]);
            cout<<"."<<s[i];
        }
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' ||s[i]=='A'||s[i]=='E'||s[i]=='U'||s[i]=='O'||s[i]=='I'||s[i]=='Y'||s[i]=='y')
        {
            continue;
        }


    }





    return 0;
}

