#define lli long long int 
#define vi vector<int> 
#define vli vector<long long int> 

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

lli gcd(lli a , lli b)
{
    if(a == 0)
        return b;
    return gcd(b%a, a);
        
}

void solve()
{
    
}

int main(){
    
    int n ;
    cin >> n;

    vector<int> pow(n,0);

    for(int i=0;i<n;i++)
    cin >> pow[i];

    sort(pow.begin(),pow.end());

    int q;
    cin >> q;

    for(int i=1;i<=q;i++)
    {
        int myp;
        cin >> myp;

        int ans=0;
        int tp=0;
        for(auto i: pow)
        if(i<=myp)
        ans++,tp+=i;

        cout << ans << " " << tp << endl;
    }

}
