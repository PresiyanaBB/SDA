#### 1. faster cin operation ####
```
std::ios_base::sync_with_stdio(false);
std::cin.tie(nullptr);
```

#### 2. use stable_sort instead of sort ####
```
stable_sort(arr,arr+size,predicate);
//predicate example for func
//predicate must be bool function that receives 2 of the elements of the array and returns true if first is less than second
bool pred(int a, int b)
{
    if( a < b )
        return true;
    return false;
}
```

#### 3. basic c++ structures ####
```
pair<T,T> p;
vector<T> v;
string s;
```

#### 4. epsilon has more than 6 7 zeroes after the . ####
```
epsilon = 0.00000001;
```

#### 5. use only '\n' and not endl ####

#### 6. static arrays are better for this course ####
`int arr[10]{} is better than int* arr = new int[n]{} `

#### 7. check if number is even ####
`!(num & 1)  is better than  !(num % 2)   // both say it is even`
