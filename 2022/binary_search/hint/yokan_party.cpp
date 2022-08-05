// Yokan Party ヒント (公式解説を参考にしてます)

#include <iostream>
using namespace std;

long long N, K, L;
long long A[1 << 18];

/**
 * @fn
 * @brief 入力で与えられたスコアを達成することができるかを調べる関数
 * @param score 達成できるかどうかを調べたいスコア
 * @return 達成できる場合は true, できない場合は false
 */
bool check(long long score) {

    // ここを自分で書いてみよう!

}

// ここから先は変更しなくて良い
int main() {
    cin >> N >> L;
    cin >> K;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    // 二分探索で答えを見つける（めぐる式二分探索法）
    long long left = -1;
    long long right = L + 1;
    while (right - left > 1) {
        long long mid = left + (right - left) / 2;
        if (check(mid) == false) right = mid;
        else left = mid;
    }
    cout << left << endl;
    return 0;
}