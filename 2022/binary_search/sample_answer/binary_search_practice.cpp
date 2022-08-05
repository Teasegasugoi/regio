// 典型アルゴリズム問題集 A – 二分探索の練習問題 解答例

#include <iostream>
using namespace std;

// 入力で扱う変数宣言
int N,K;
int A[100000];


/**
 * @fn
 * @brief 入力で与えられたスコアを達成することができるかを調べる関数, A[index] >= K の判定をする
 * @param index インデックス
 * @return 達成できる場合は true, できない場合は false
 */
bool is_ok(int index)
{
    if (A[index] >= K) return true;
    else return false;
}


// ここより下は変更する必要ありません！
int binary_search()
{
    int left = -1;
    int right = N;

    while (right - left > 1)
    {
        int mid = (left + right) / 2;
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
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // 二分探索実行
    int result = binary_search();

    // 出力
    if (result == N)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << result << endl;
    }
}