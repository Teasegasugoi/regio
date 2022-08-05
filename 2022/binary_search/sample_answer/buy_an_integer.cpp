// Buy an integer 解答例

#include <iostream>
using namespace std;

// 入力で扱う変数宣言
long long A, B, X;

/**
 * @fn
 * @brief 入力で与えられたスコアを達成することができるかを調べる関数, 整数が買えるかどうか の判定をする
 * @param integer 整数
 * @return 買える場合は true, 買えない場合は false
 */
bool is_ok(long long integer)
{
    // まず初めに integer の桁数を求める
    int digit = 0;
    long long tmp = integer;
    while (tmp != 0)
    {
        tmp /= 10;
        digit++;
    }

    // 値段を求める
    long long price = (A * integer) + (B * digit);

    if (price <= X)
        return true;
    else
        return false;
}

// ここより下は変更する必要ありません！
long long binary_search()
{
    long long left = -1;
    long long right = 1000000000 + 1;

    while (right - left > 1)
    {
        long long mid = (left + right) / 2;
        if (is_ok(mid))
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }

    return left;
}

int main()
{
    // 入力受け取り
    cin >> A >> B >> X;

    // 二分探索実行
    long long result = binary_search();

    // 出力
    cout << result << endl;
}