#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
        if (arr[i] <= pivot)
            count++;

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    while (start < pivotIndex && end > pivotIndex) {
        while (arr[start] <= pivot) 
            start++;

        while (arr[end] > pivot)
            end--;

        if (start < pivotIndex && end > pivotIndex)
            swap(arr[start++], arr[end--]);
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

//choose pivot element - first element in array
//find the first bigger number from the left and the first smaller number from the right and swap them
//do the same thing until index of the bigger is after index of the smaller
//then the pivot is the right place and we choose another pivot from the left array(and one from the right)
//and do same thing until the array is sorted

int main() 
{}
