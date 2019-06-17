
#include <bits/stdc++.h>
using namespace std;
long long t,j,n,mod=1000000007;
set<long long > s;

long long  power(long long x, long long y) 
{ 
    long long  res = 1;    
   
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = res*x; 
        res%=mod;
   
        // n must be even now 
        y = y>>1; // y = y/2 
        y%=mod;
        x = x*x;  // Change x to x^2 
        x%=mod;
    } 
    res%=mod;
    return res; 
}


int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        /*long long cnt=0;
        for(long long i=0;i<pow(10,n);i++){
            j=i;
            while(j>0){
                s.insert(j%10);
                j/=10;
            }
            j=pow(10,n)-i-1;
             while(j>0){
                s.insert(j%10);
                j/=10;
            }
            
            if(s.size()==2){
                //cout<<i<< "  "<<pow(10,n)-i-1<<endl;
                cnt++;
            }
            s.clear();
        }
        
        cout<<"Cnt : "<<cnt+2<<endl;*/
        long long ans=10*power(2,n-1);
        cout<<ans%mod<<endl;
        
    }
    return 0;
}
