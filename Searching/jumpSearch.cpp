#include <iostream>
#include <math.h>  
#include <vector>
using namespace std;

int jumpSearch(int arr[], int x, int n)
{
    int step = sqrt(n);
    int prev = 0;

    while (arr[min(step, n) - 1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }

    while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    
    if (arr[prev] == x)
        return prev;

    return -1;
}

//THE ARRAY MUST BE SORTED
//every time we jump sqrt(array size) positions and if current number is bigger we do linear search backwards

int main()
{}
