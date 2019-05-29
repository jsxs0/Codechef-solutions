#include<bits/stdc++.h>
//#include <iostream>
#define ll long long int
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

int main() {
    ll N1,N2;
    fast;
    cin>>N1;
    cin>>N2;
    if(N1>N2)
        cout<<N1-N2;
    else
        cout<<N1+N2;
	// your code goes here
	return 0;
}
