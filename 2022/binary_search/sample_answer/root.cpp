// 平方根を求めるプログラム 解答例

#include <iostream>
using namespace std;

// 入力で扱う変数宣言
long long N;

/**
 * @fn
 * @brief 入力で与えられたスコアを達成することができるかを調べる関数, num^2 >= N の判定をする
 * @param num 平方根かもしれない数字
 * @return 達成できる場合は true, できない場合は false
 */
bool is_ok(long long num)
{
    if ((long long)num * num >= N)
        return true;
    else
        return false;
}

// ここより下は変更する必要ありません！
long long binary_search()
{
    long long left = -1;
    long long right = 1000000000;

    while (right - left > 1)
    {
        long long mid = (left + right) / 2;
        if (is_ok(mid))
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    return right;
}

int main()
{
    // 入力受け取り
    cin >> N;

    // 二分探索実行
    long long result = binary_search();

    // 出力, 整数ではない場合は -1
    if (result * result == N)
    {
        cout << result << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}