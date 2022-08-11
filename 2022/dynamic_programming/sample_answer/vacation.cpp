// vacation 解答例
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // 活動表を作る
    int job[N][3];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> job[i][j];
        }
    }

    // 二次元のDP表を作成
    int dp[N][3];

    // 一日目だけ埋めておく
    dp[0][0] = job[0][0];
    dp[0][1] = job[0][1];
    dp[0][2] = job[0][2];

    for (int i = 1; i < N; i++)
    {
        dp[i][0] = job[i][0] + max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = job[i][1] + max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = job[i][2] + max(dp[i-1][0], dp[i-1][1]);
    }

    int result;
    for (int i = 0; i < 3; i++)
    {
        if (result < dp[N - 1][i])
        {
            result = dp[N - 1][i];
        }
    }

    cout << result << endl;
}