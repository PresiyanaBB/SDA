#include <iostream>
#include <math.h>  
#include <vector>
using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

//THE ARRAY MUST BE SORTED
//every time we cut the array in half

int main()
{}
