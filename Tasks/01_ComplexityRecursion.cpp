#include <iostream>
#include <math.h>  
using namespace std;

void powerSet(string str, int index = -1, string curr = "") {
    int n = str.length();
    if (index == n)
        return;

    cout << curr << "\n";
    for (int i = index + 1; i < n; i++) {
        curr += str[i];
        powerSet(str, i, curr);
        curr.erase(curr.size() - 1);
    }
    return;
}

void permute(string a, int l, int r) {
    if (l == r)
    {
        cout << a << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}

int fact(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    //fact => n*(n-1)*(n-2)*...*1 => for every n, fact() will be called 1 time => 1*1*1*1...*1 (n times) => O(N)

    //fibonacci => 1 1 2 3 5 8 13 => for every n, fibonacci() will be called 2 times (for n-1 and n-2) => 2*2*2..*2 (n times) => O(2^N)
}


/*
## powerSet complexity tree: ##
f(-1)
 1. f(0)
     1. f(1)
         1. f(2)
             1. **f(3)**
         2. f(2) incremented original
             1. **f(3)**
     2. f(1) incremented original
         1. f(2)
             1. **f(3)**
         2. f(2)
             1. **f(3)**
     3. f(2) incremented original
         1. **f(3)**
 2. f(1) incremented original
     1. f(2)
         1. **f(3)**
     2. f(2)
         1. **f(3)**
 3. f(2) incremented original
     1. **f(3)**
*/