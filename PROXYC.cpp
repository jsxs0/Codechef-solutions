#include <bits/stdc++.h>
using namespace std;


double d,P,ans,p,f=4.0,cnt;
string s;

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>d;
        cin>>s;
        cnt=0;
        P=0;
        
        for(int i=2;i<d-2;i++){
            if( s[i]=='A' && (s[i-1]=='P'||s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P') ){
                cnt++;
            }
        }
        for(int i=0;i<d;i++){
            if( s[i]=='P' ){
                P++;
            }
        }
        ans=(((double)(3.0*d-4.0*P))/(double)f );
        
        if(cnt>=ans){
            cout<<max((int)ceil(ans),0)<<endl;
        }else{
            cout<<"-1"<<endl;
        }
        
    }
    //cout<<ans<<" "<<cnt<<endl;
    return 0;
}
