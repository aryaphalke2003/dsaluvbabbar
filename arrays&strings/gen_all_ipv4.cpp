//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
public:
    bool check(string s)
    {
        if (s.size() <= 0 || s.size() > 3)
            return false;
        if (stoi(s) < 0 || stoi(s) > 255)
            return false;
        if (s[0] == '0' && s.size() > 1)
            return false;

        return true;
    }

    string gen(string &s, int i, int j, int k, int n)
    {
        string a, b, c, d;

        a = s.substr(0, i);     // length is i+1
        b = s.substr(i, j - i); // length is j-i
        c = s.substr(j, k - j); // length is k-j
        d = s.substr(k, n - k); // length is n-k-1

        if (check(a) && check(b) && check(c) && check(d))
            return a + "." + b + "." + c + "." + d;
        else
            return "";
    }

    vector<string> genIp(string &s)
    {
        // Your code here

        vector<string> ans;
        int n = s.size();
        string str = "";
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    str = gen(s, i, j, k, n);
                    if (str.size() > 0)
                        ans.push_back(str);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if (str.size() == 0)
            cout << -1 << "\n";
        else
        {
            for (auto &u : str)
            {
                cout << u << "\n";
            }
        }
    }
}
// } Driver Code Ends