#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
/*#include <iostream>
using namespace std;*/

class DECINC
{
    public:
        ll N;
    ll getdata()
    {
        cin>>N;
        return 0;
    }
    ll cal()
    {
        if(N%4==0)
        {
            N+=1;
        }
        else
        {
            N-=1;
        }
    return N;
    }
};
int main() {
	// your code goes here
	//int N;
	DECINC p;
	p.getdata();
	cout<<p.cal();
	return 0;
}
