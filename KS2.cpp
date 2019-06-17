#include <bits/stdc++.h>
using namespace std;

int cnt=0;
int main(){
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long j=n,sum=0;
            
        while(j>0){
            sum+=j%10;
            j/=10;
        }
        sum=sum%10;
        sum=10-sum;
        
        if(sum==10)
            sum=0;
        
        cout<<n<<sum<<endl;
        
    }
    return 0;
}
