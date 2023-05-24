//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        if(N%groupSize==0)
        {
            sort(hand.begin(),hand.end());
            // 1 2 2 3 3 4 6 7 8
            for(int a=1;a<=N/groupSize;a++)
            {
                int s=hand[0];
                while(groupSize--)
                {
                    
                    auto it = find(hand.begin(),hand.end(),s);
                    
                    if(it==hand.end())
                    return false;
                    else
                    {
                        hand.erase(it);
                        s++;
                    }
                }
            }
            
            return true;
            
            
        }
        else
        {
            return false;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends