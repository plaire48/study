#include <iostream>
#include <array>

using namespace std;
array<int, 1001> d, p = {0};

int sol(const int n)
{
    if(n == 0 ) return 0;
    if(d[n] > 0) return d[n];
    for(int j = 1; j <= n; ++j)
    {
        d[n] = max(d[n],sol(n-j) + p[j]);
    }
    return d[n];
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int v;
        cin >> v;
        p[i] = v;
    }

    cout << sol(n) << '\n';
    return 0;
}