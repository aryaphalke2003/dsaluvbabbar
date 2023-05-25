vector<string> find_permutation(string S)
{
    // Code here there
    vector<string> ans;
    sort(S.begin(), S.end());

    do
    {
        ans.push_back(S);
    } while (next_permutation(S.begin(), S.end()));

    return ans;
}

void solve(string s, int ind, vector<string> &ans, int n)
{
    if (ind == n)
    {
        ans.push_back(s);
        return;
    }

    for (int i = ind; i < n; i++)
    {
        cout << "ind: " << ind << " i: " << i << endl;
        swap(s[ind], s[i]);
        solve(s, ind + 1, ans, n);
        swap(s[ind], s[i]);
    }
}
vector<string> find_all_permutation(string S)
{
    // Code here there
    vector<string> ans;

    int index = 0;
    int n = S.size();
    solve(S, index, ans, n);
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}
