// 簡単な二分探索の実装練習 解答例

#include <iostream>
#include <vector>
using namespace std;

// 配列
vector<int> A = {1, 3, 5, 11, 12, 13, 17, 22, 25, 28};

// 入力で扱う変数宣言
int K;

// 結果, 値が存在しない場合は -1 を返す(今回は必ず値が存在するものとするので、0でもよい)
int result = -1;

int main()
{
    cin >> K;

    int left = 0;
    int right = 9;

    // ここを自分で実装してみよう!
    // left <= right の間 1 ~ 3 を繰り返す
    // 1. left と right の 真ん中の数字 mid を求める (割り切れない場合は切り捨てでok)
    // 2. A[mid] と K を比較
    // 3-1. A[mid] = K の場合 -> result = mid として, 繰り返しから抜ける
    // 3-2. A[mid] > K の場合 -> right = mid - 1
    // 3-3. A[mid] < K の場合 -> left = mid + 1


    // ここから下は変更しなくて大丈夫です!
    // 答えを出力
    if (result != -1)
    {
        cout << result << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}