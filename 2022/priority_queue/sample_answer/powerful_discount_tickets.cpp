// Powerful Discount Tickets 解答例
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    priority_queue<int> q;

    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        q.push(A);
    }

    // 1番大きい金額に割引券を使う
    for (int i = 0; i < M; i++)
    {
        int A = q.top();
        q.pop();
        q.push(A / 2);
    }

    long long ans = 0;
    while (!q.empty())
    {
        ans += q.top();
        q.pop();
    }
    cout << ans << endl;
}