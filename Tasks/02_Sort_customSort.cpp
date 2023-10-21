#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void custom_sort(char* arr, int n)
{
    int l = -1, r = -1;
    string res;

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
            res += arr[i];

        if (arr[i] >= 'A' && arr[i] <= 'Z' && l == -1)
            l = i;

        if (arr[i] >= 'a' && arr[i] <= 'z' && r == -1)
        {
            r = i;
            break;
        }
    }

    for (size_t i = r; i < n; i++)
        res += arr[i];

    for (size_t i = l; i < r; i++)
        res += arr[i];

    for (size_t i = 0; i < n; i++)
        arr[i] = res[i];
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n = 0;
    cin >> n;
    char* arr = new char[n + 1];

    cin.ignore();
    for (size_t i = 0; i < n; i++)
        cin >> arr[i];

    arr[n] = '\0';
    stable_sort(arr, arr + n);
    custom_sort(arr, n);

    cout << arr;
    delete[] arr;
}

