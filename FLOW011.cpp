#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

int main() {
    ll HRA,DA,b_salary,b;
    double gross_salary;
    fast;
    cin>>b;
    while(b--)
    {
        cin>>b_salary;
        if(b_salary<1500)
        {
            gross_salary=(b_salary+(0.1*b_salary)+(0.9*b_salary));
        }
        else
        {
            gross_salary=((b_salary)+500+(0.98*b_salary));
        }
        cout<<gross_salary<<endl;
    }
	// your code goes here
	return 0;
}
