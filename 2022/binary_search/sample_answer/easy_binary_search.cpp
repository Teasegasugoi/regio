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

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (A[mid] == K)
        {
            result = mid;
            break;
        }
        else if (A[mid] > K)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

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