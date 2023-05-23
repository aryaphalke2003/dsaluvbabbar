#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; 

    vector<int> v(n,0);

    for(int i=0;i<n;i++)
    cin >> v[i];

    int l=0;
    int h=n-1;

    while(l<=h)
    {
        if(v[l]<0 && v[h]>=0)
        swap(v[l++],v[h--]);
        if(v[l]<0 && v[h]<0)
        h--;
        if(v[l]>=0)
        l++;
    }

    for(auto it: v)
    cout << it << " ";

}