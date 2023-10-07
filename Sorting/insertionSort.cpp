#include <iostream>
#include <math.h>  
#include <vector>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, curr, j;
    for (i = 1; i < n; i++) {
        curr = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > curr) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = curr;
    }
}

//sort the first two, then sort the first three, then the first four and so on
//every current number is moved to its potision so the mini array is sorted
//every bigger number moves one position to the right

int main()
{}
