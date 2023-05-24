class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0;
        vector<int> arr = prices;
        int n = arr.size();
        int buy = arr[0];
        for (int i = 0; i < n; i++)
        {
            buy = min(buy, arr[i]);
            ans = max(ans, arr[i] - buy);
        }

        return ans;
    }
};

//twice allowed
int maxProfit(vector<int> &price)
{
    // Write your code here..
    int n = price.size();
    int maxP = price[n-1];

    int minSofar = 0;

    vector<int> profit(n, 0);

    for (int i = n - 2; i >= 0; i--)
    {

        maxP = max(maxP, price[i]);

        profit[i] = max(profit[i + 1], maxP - price[i]);
    }

    minSofar = price[0];

    for (int i = 1; i < price.size(); i++)
    {

        minSofar = min(minSofar, price[i]);

        int pro = price[i] - minSofar;

        profit[i] = max(profit[i - 1], profit[i] + pro);
    }

    return profit[n - 1];
}