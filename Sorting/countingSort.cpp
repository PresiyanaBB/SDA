#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> countSort(vector<int>& inputArray)
{
    int N = inputArray.size();
    int M = 0;

    for (int i = 0; i < N; i++)
        M = max(M, inputArray[i]);

    vector<int> countArray(M + 1, 0);

    for (int i = 0; i < N; i++)
        countArray[inputArray[i]]++;

    for (int i = 1; i <= M; i++)
        countArray[i] += countArray[i - 1];

    vector<int> outputArray(N);

    for (int i = N - 1; i >= 0; i--){
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    return outputArray;
}

//the number and its index in the array are the same
//the index is our number and the int to it is the number of occurs in the array

int main() 
{}

