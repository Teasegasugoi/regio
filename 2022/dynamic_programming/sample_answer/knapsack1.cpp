// Knapsack 1 解答例
#include <bits/stdc++.h>
using namespace std;

#define ll int64_t

int main()
{
    ll N, W;
    cin >> N >> W;

    ll w, v;
    vector<vector<ll>> dp(N + 1, vector<ll>(W + 1, 0));
    for (int i = 1; i < N + 1; i++)
    {
        cin >> w >> v;
        for (int j = 0; j < W + 1; j++)
        {
            if (j < w)
            {
                //新しい品物が入らない場合をここに
                dp.at(i).at(j) = dp.at(i-1).at(j);
            }
            else
            {
                //新しい品物が入れられる場合をここに
                dp.at(i).at(j) = max(dp.at(i-1).at(j), v + dp.at(i-1).at(j - w));
            }
        }
    }

    cout << dp.at(N).at(W) << endl;
}