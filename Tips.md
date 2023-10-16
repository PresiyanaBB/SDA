#### 1. Faster cin operation ####
```c++
std::ios_base::sync_with_stdio(false);
std::cin.tie(nullptr);
```

#### 2. Use stable_sort instead of sort ####
```c++
stable_sort(arr,arr+size,predicate);
//predicate example for sorting specification (without it it will be the default)
//predicate must be bool function that receives 2 of the elements of the array and returns true if first is less than second
bool predicate(int a, int b)
{
    if( a < b )
        return true;
    return false;
}

//sorting vector
vector<int> v;
stable_sort(v.begin(),v.end());
```

#### 3. Basic c++ structures ####
```c++
pair<int,int> p;
vector<int> v;
string s;
```

#### 4. Epsilon has more than 6 7 zeroes after the . ####
```
epsilon = 0.00000001;
```

#### 5. Use only '\n' and not endl ####

#### 6. Static arrays are better for this course ####
```c++
int arr[10]{} is better than int* arr = new int[n]{}
```

#### 7. Check if number is even ####
```c++
!(num & 1)  is better than  !(num % 2)   // both say it is even
```
