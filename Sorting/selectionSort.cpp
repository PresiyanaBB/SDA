#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

//goes to ind 0 and in the inner for looks for the smallest number in the rest of the array
//then we have the smallest element on position 0 and go fix position 1 and go with for from 2 to len
//and so on for every index we fix the index and search about the element that must be on this position

int main() 
{}
