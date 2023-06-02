#define lli long long int 
#define vi vector<int> 
#define vli vector<long long int> 
 
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    lli n,m;
    cin >> n >> m;
 
    vector<lli> vec(n);
 
    for(lli i=0;i<n;i++)
        cin >> vec[i];
 
    sort(vec.begin(),vec.end());
    lli e = vec[n-1];
    lli s = vec[0];
 
    while(s<=e)
    {
        lli mid = s + (e-s)/2; //searching over heights basically
 
        lli totalwood=0;
 
        for(auto i: vec)
            if(i>mid)
                totalwood += (i-mid);
 
        if(totalwood >= m)
            s = mid+1; //search for a greater height
        else
            e = mid-1; //search for a lower height
    }
 
    cout << e;
    return 0;
}