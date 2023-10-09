#include <iostream>
#include <math.h>  
#include <vector>
using namespace std;

int findPairWithSumXSmart(vector<int>& a, int X) {

    int result = 0;
    int N = a.size();

    for (int i = 0, j = N - 1; i < j;) 
    {
        if (a[i] + a[j] > X) { j--; }
        else if (a[i] + a[j] < X) { i++; }
        else if (a[i] + a[j] == X) { result++; i++; j--; }
    }

    return result;
}

int numberOfPairsCanBeMade(vector<int>& a) {

    int counters[10] = { 0 };
    int numberOfPairs = 0;
    int n = a.size();

    for (int i = 0; i < n; i++)
        counters[a[i]]++;
    
    for (int i = 0; i < 10; i++)
        numberOfPairs += (counters[i] / 2);

    return numberOfPairs;
}

int main()
{}

//findPairWithSumXSmart uses two pointers to search in sorted array 

//numberOfPairsCanBeMade uses counting sort
