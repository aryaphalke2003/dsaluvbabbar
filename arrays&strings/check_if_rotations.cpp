#define lli long long int 
#define vi vector<int> 
#define vli vector<long long int> 

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){

    string a,b;
    cin >> a >> b;

    if(a.size()!=b.size())
    {cout<<0;return 0;}

    // queue<char> aa,bb;

    // for(auto it: a)
    // aa.push(it);

    // for(auto it: b)
    // bb.push(it);

    // for(int i=0;i<a.size();i++)
    // {
    //     if(aa==bb)
    //     {cout << "1"; return 1;}

    //     char x = aa.front();
    //     aa.pop();
    //     aa.push(x);
    // }
    // cout << 0;
    // return 0;

    string x = b+b;

    for(int i=0;i<a.size();i++)
    {
        if(x.substr(i,a.size()) == a)
        {   cout << 1;
            return 1;}
    }
    cout << 0;
    return 0;
}


