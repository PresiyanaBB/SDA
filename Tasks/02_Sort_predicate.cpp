#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool pred(pair<int, pair<int, double>> a, pair<int, pair<int, double>> b)
{
    if (a.second.second < b.second.second)
        return true;

    if ((a.second.second == b.second.second) || (a.second.second == b.second.second + 0.00000001) || (a.second.second == b.second.second - 0.00000001))
        if (a.second.first < b.second.first)
            return true;

    return false;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n = 0;
    cin >> n;

    pair<int, pair<int, double>>* diemAndEff = new pair<int, pair<int, double>>[n];
    int time = 0;

    for (size_t i = 0; i < n; i++)
    {
        diemAndEff[i].first = i + 1; //index of boy
        cin >> diemAndEff[i].second.first;
        cin >> time;
        diemAndEff[i].second.second = (double)(diemAndEff[i].second.first * diemAndEff[i].second.first) / (double)time;
    }

    stable_sort(diemAndEff, diemAndEff + n, pred);

    for (int i = n - 1; i >= 0; i--)
        cout << diemAndEff[i].first << ' ';
}

