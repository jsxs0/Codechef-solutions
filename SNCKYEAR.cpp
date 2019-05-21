#include<bits/stdc++.h>
//#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        if(N==2010||N==2015||N==2016||N==2017||N==2019)
        {
            cout<<"HOSTED\n";
        }
        else
        {
            cout<<"NOT HOSTED\n";
        }
    }
	return 0;
}
