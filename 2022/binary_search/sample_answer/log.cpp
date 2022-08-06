// log 解答例

#include <iostream>
using namespace std;

long long n;

/**
 * @fn
 * @brief 入力で与えられたスコアを達成することができるかを調べる関数
 * @param score 達成できるかどうかを調べたいスコア
 * @return 達成できる場合は true, できない場合は false
 */
bool check(long long score)
{
    long long sum = score * (score + 1) / 2;

    if (sum <= n + 1)
    {
        return true;
    }
    return false;
}

// ここから先は変更しなくて良い
int main()
{
    cin >> n;

    // 二分探索で答えを見つける（めぐる式二分探索法）
    long long ok = -1;
    long long ng = 2e9;
    while (abs(ok - ng) > 1)
    {
        long long mid = ng + (ok - ng) / 2;
        if (check(mid))
        {
            ok = mid;
        }
        else
        {
            ng = mid;
        }
    }
    cout << n - ok + 1 << endl;
    return 0;
}