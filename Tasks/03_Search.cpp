#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

const size_t MAX_SIZE = 1e5;
size_t arr[MAX_SIZE]{};

//n = size of arr,  p = parts
bool canPart(size_t n, size_t p, size_t target)
{
    size_t curr = 0;
    for (size_t i = 0; i < n; i++)
    {
        curr += arr[i];
        if (curr > target)
        {
            p--;
            i--;
            curr = 0;
        }
        if (p == 0 && i != n-1)
            return false;
    }

    return true;
}

//left = best case will be the max num , right = worst case will be sum of all  
size_t binary(size_t l,size_t r,size_t n, size_t p)
{
    while (l <= r) {
        size_t mid = l + (r - l) / 2;
        if (canPart(n, p, mid))
            r = mid - 1;
        else
            l = mid + 1;
    }

    return l;
}

int main()
{
    size_t n, p;
    cin >> n >> p;
    size_t sum = 0;
    size_t maxNum = 0;
    for (size_t i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] > maxNum) maxNum = arr[i];
    }
    cout << binary(maxNum,sum,n, p);
}
