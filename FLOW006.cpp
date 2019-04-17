#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
int main()
{
    ll t=0,a=0,b;
    fast;
    cin>>b;
    while(b--)
    {
        cin>>t;
        while(t!=0)
        {
            a+=(t%10);
            t/=10;
        }
        cout<<a<<"\n";
        a=0;
    }
}
