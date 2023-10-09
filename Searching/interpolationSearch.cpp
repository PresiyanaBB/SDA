#include <iostream>
#include <math.h>  
#include <vector>
using namespace std;

int interpolationSearch(int arr[], int left, int right, int x)
{
    int current;
    if (left <= right && x >= arr[left] && x <= arr[right]) {
        current = left
            + (((double)(right - left) / (arr[right] - arr[left]))
                * (x - arr[left]));

        if (arr[current] == x)
            return current;

        if (arr[current] < x)
            return interpolationSearch(arr, current + 1, right, x);

        if (arr[current] > x)
            return interpolationSearch(arr, left, current - 1, x);
    }
    return -1;
}

//THE ARRAY MUST BE SORTED
//we use the current fomula and move left pointer if arr[current] < x, and move right if arr[current] > x

int main()
{}
