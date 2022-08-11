// Typical Stairs 解答例
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    // 壊れている階段は1
    vector<int> d(N+1);
    for (int i = 0; i < M; i++) {
        int A;
        cin >> A;
        d.at(A) = 1;
    }

    long long sum;
    int pre_pre = 0;
    int pre = 1;

    for (int i = 0; i < N; i++)
    {
        if (!d.at(i+1)) // 階段壊れていない時
        {
            sum = (pre_pre + pre) % 1000000007;
            pre_pre = pre;
            pre = sum;
        } else {
            pre_pre = pre;
            pre = 0;
        }
    }

    cout << sum << endl;
}