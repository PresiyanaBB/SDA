#include <iostream>
#include <math.h>  
#include <vector>
using namespace std;

int ternarySearch(int left, int right, int x, int arr[])
{
    if (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == x) 
            return mid1;
        
        if (arr[mid2] == x)
            return mid2;
        

        if (x < arr[mid1]) 
            return ternarySearch(left, mid1 - 1, x, arr);
        
        else if (x > arr[mid2]) 
            return ternarySearch(mid2 + 1, right, x, arr);
        
        else 
            return ternarySearch(mid1 + 1, mid2 - 1, x, arr);
    }

    return -1;
}

//like binary search but in three parts not two

int main()
{}
